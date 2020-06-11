#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

std::vector<int> fibo1(int n) {
    if (n == 0)
        return {0};
    std::vector<int> arr{1};
    arr.resize(n);
    std::adjacent_difference(arr.begin(), std::prev(arr.end()), std::next(arr.begin()), std::plus<int>{});
    return arr;
}

std::vector<int> fibo2(int n) {
    std::vector<int> arr{1, 1};
    arr.resize(n);
    std::transform(arr.begin(), arr.end(), std::next(arr.begin()),
                   std::next(arr.begin(), 2), std::plus<int>{});
    return arr;
}

int nth_fib(const int nth_element) {
    if (nth_element < 0) {
        return -1;
    }
    if (nth_element <= 1) {
        return nth_element;
    }
    return nth_fib(nth_element - 1) + nth_fib(nth_element - 2);
}

std::vector<int> fibo3(const int count) {
    std::vector<int> vec(count);
    std::generate(vec.begin(), vec.end(), [i{0}]() mutable
    {
        return nth_fib(++i);
    });
    return vec;
}

void print(const std::vector<int>& vec) {
    for (const auto elem : vec) {
        std::cout << elem << ", ";
    }
    std::cout << '\n';
}



int main() {
    // auto vec = fibo1(10);
    // copy(begin(vec), end(vec), std::ostream_iterator<int>{std::cout, " "});
    // vec = fibo2(10);
    // copy(begin(vec), end(vec), std::ostream_iterator<int>{std::cout, " "});
    auto vec = fibo3(10);
    print(vec);

}
