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

bool is_palindrome3(const std::string& str) {
    auto it = str.begin();
    return std::all_of(str.begin(), str.begin() + str.size() / 2, [&str, &it](const auto& el){
                    it = std::find(it, str.begin() + str.size() / 2, el);

                    return el == *(str.end() - (it - str.begin() + 1));
            });
}

bool is_palindrome4(const std::string& str) {
    return str.begin() == std::search(str.begin(), str.end(), str.rbegin(), str.rend());
}
