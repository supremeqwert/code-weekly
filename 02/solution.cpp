#include <iostream>
#include <string>

class BigNum {
    // maybe use this
};

std::string add(const std::string& big1, const std::string& big2)
{
    const std::string* maxs;
    size_t max;
    size_t min;
    std::string big3 = "";
    if(big1.length()>big2.length()){
        max = big1.length();
        min = big2.length();
        maxs = &big1;
    } else {
        max = big2.length();
        min = big1.length();
        maxs = &big2;
    }
    int carry = 0;
    int remainder = 0;
    for (int i =1; i<=max; i++){
        if(i<=min){
            remainder = (big1[big1.length()-i]-'0')+(big2[big2.length()-i]-'0')+carry;
        } else {
            remainder = ((*maxs)[(*maxs).length() - i]-'0')+carry;
        }
        carry = remainder/10;
        int print = remainder %10;
        big3 = std::to_string(print) + big3;
    }
    maxs = nullptr;
    delete maxs;
    if(carry==1){
        big3 = "1"+big3;
    }
    for (size_t i=0; i<big3.length();i++){
        if(big3[i]!='0'){
            return big3.substr(i, big3.length()-i);
        }
    }
    return big3;
}

int main(int argc, char* argv[])
{
    // read in numbers, cast to uint32_t
    const std::string& big1 = argv[1];
    const std::string& big2 = argv[2];
    std::cout << add(big1, big2); // print num1 + num2
}

// Copy this file to src/solution.cpp and add your code.
// Then compile with `g++ src/solution.cpp -o solution` in the `02` directory
