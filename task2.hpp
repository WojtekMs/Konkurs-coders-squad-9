#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>


void print1(const std::vector<int>& vec) {
    std::equal(vec.begin(), vec.end(), vec.begin(), [](const int first, const int second)
    {
        std::cout << first << ", ";
        return first == second;
    });
}

void print2(const std::vector<int>& vec) {
    std::any_of(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element << ", ";
        return false;
    });
}

void print3(const std::vector<int>& vec) {
    std::none_of(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element << ", ";
        return false;
    });
}

