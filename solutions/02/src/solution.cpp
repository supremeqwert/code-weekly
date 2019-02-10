#include <iostream>
#include <numeric>
#include <string>
#include <vector>

class BigNum {
public:
    explicit BigNum(const std::string& num)
    {
        std::transform(
            num.rbegin(), num.rend(), std::back_inserter(vec), [](char n) { return n - '0'; });
        chop();
    }

    BigNum operator+(const BigNum& rhs) const
    {
        auto sum = vec.size() > rhs.vec.size() ? vec : rhs.vec;
        auto maxIdx = std::min(vec.size(), rhs.vec.size());
        for (uint32_t i = 0; i < maxIdx; ++i) {
            sum[i] = vec[i] + rhs.vec[i];
        }

        return BigNum(std::move(sum));
    }

private:
    std::vector<uint32_t> vec;

    explicit BigNum(std::vector<uint32_t>&& num)
        : vec(std::move(num))
    {
        vec.emplace_back(0);
        for (uint32_t i = 0; i < vec.size() - 1; ++i) {
            vec[i + 1] += vec[i] / 10;
            vec[i] %= 10;
        }
        chop();
    }

    void chop()
    {
        while (vec.size() > 1 && vec.back() == 0) {
            vec.pop_back();
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const BigNum& num);
};

std::ostream& operator<<(std::ostream& os, const BigNum& num)
{
    os << std::accumulate(num.vec.rbegin(), num.vec.rend(), std::string(),
        [](std::string part, uint32_t n) { return part + std::to_string(n); });
    return os;
}

int main(int argc, char* argv[])
{
    // read in numbers, cast to uint32_t
    const BigNum big1(argv[1]);
    const BigNum big2(argv[2]);
    std::cout << big1 + big2; // print num1 + num2
}

// Compile with `g++ src/solution.cpp -std=c++11 -o solution` in the `02` directory
