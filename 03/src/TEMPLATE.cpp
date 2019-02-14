#include <iostream>
#include <string>

class BigNum {
    // maybe use this
};

std::string add(const std::string& big1, const std::string& big2)
{
    // solution
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
