#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
#include <algorithm>
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

int main() {
    auto vec = fibo1(10);
    copy(begin(vec), end(vec), std::ostream_iterator<int>{std::cout, " "});
    vec = fibo2(10);
    copy(begin(vec), end(vec), std::ostream_iterator<int>{std::cout, " "});
}
