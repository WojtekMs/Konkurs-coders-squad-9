#pragma once

#include <algorithm>
#include <numeric>
#include <string>

bool is_palindrome1(const std::string& str) {
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

bool is_palindrome2(const std::string& str) {
    auto iterators = std::mismatch(str.begin(), str.end(), str.rbegin());
    return (iterators.first == str.end() && iterators.second == str.rend());
}
