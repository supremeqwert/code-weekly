#include <iostream>
#include <string>

class BigNum {
    // maybe use this
};

std::string add(const std::string& big1, const std::string& big2)
{
    std::string maxs;
    size_t max;
    size_t min;
    if (big1.length()>big2.length()){
        max = big1.length();
        min = big2.length();
        maxs = big1;
    } else{
        max = big2.length();
        min = big1.length();
        maxs = big2;
    }
    std::string big3;
    int big3remainder=0;
    for(size_t i =1; i<=max; i++) {
        std::string big3curr;
        if (i <= min) {
            big3remainder = (big1[big1.length()- i] -'0')+ (big2[big2.length()- i]-'0') +
                    big3remainder;
        } else {
            big3remainder = (maxs[maxs.length() - i]-'0') + big3remainder;
        }
        big3curr = std::to_string(big3remainder%10);
        big3remainder = big3remainder/10;
        big3 = big3curr+big3;
    }
    size_t leading0counter=0;
    if(big3remainder==1){
        big3 = std::to_string(big3remainder)+big3;
    } else {
        for(size_t i=0;i<=big3.length();i++){
            if(big3[i]==0){
                leading0counter++;
            } else {
                return big3.substr(leading0counter, big3.length());
            }
        }
    }
    return big3;
}

int main(int argc, char* argv[])
{
    if(argc){}
    // read in numbers, cast to uint32_t
    const std::string& big1 = argv[1];
    const std::string& big2 = argv[2];
    std::cout << add(big1, big2); // print num1 + num2
}

// Copy this file to src/solution.cpp and add your code.
// Then compile with `g++ src/solution.cpp -o solution` in the `02` directory
