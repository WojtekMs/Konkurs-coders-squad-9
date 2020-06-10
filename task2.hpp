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

void print4(const std::vector<int>& vec) {
    std::all_of(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element << ", ";
        return true;
    });
}

void print5(const std::vector<int>& vec) {
   std::for_each(vec.begin(), vec.end(), [](const int element)
   {
       std::cout << element << ", ";
   });
}


// void print7(const std::vector<int>& vec) {
//     std::for_each_n(vec.begin(), vec.size(), [](const int element)
//     {
//         std::cout << element << ", ";
//     });
// }

void print6(const std::vector<int>& vec) {
    std::count_if(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element << ", ";
        return element == 0;
    });
}

void print7(const std::vector<int>& vec) {
    std::mismatch(vec.begin(), vec.end(), vec.begin(), vec.end(), [](const int first, const int second)
    {
        std::cout << first << ", ";
        return true;
    });
}

void print8(const std::vector<int>& vec) {
    std::find_if(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element << ", ";
        return false;
    });
}

void print9(const std::vector<int>& vec) {
    std::find_if_not(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element << ", ";
        return true;
    });
}

void print10(const std::vector<int>& vec) {
    std::find_end(vec.rbegin(), vec.rend(), vec.begin(), vec.end(), [](const int first, const int second)
    {
        std::cout << first << ", ";
        return true;
    });
}

void print11(const std::vector<int>& vec) {
    std::find_first_of(vec.begin(), vec.end(), vec.begin(), vec.begin() + 1, [](const int first, const int second)
    {
        std::cout << first << ", ";
        return false;
    });
}

void print12(const std::vector<int>& vec) {
    std::adjacent_find(vec.begin(), vec.end(), [i{0}](const int first, const int second) mutable
    {
        if (i == 0) {
            std::cout << first << ", ";
        }
        i++;
        std::cout << second << ", ";
        return false;
    });
}

void print13(const std::vector<int>& vec) {
    std::adjacent_find(vec.begin(), vec.end(), [i{0}](const int first, const int second) mutable
    {
        if (i == 0) {
            std::cout << first << ", ";
        }
        i++;
        std::cout << second << ", ";
        return false;
    });
}

void print14(const std::vector<int>& vec) {
    std::search(vec.begin(), vec.end(), vec.begin(), vec.end(), [](const int first, const int second)
    {
        std::cout << first << ", ";
        return false;
    });
}

void print15(const std::vector<int>& vec) {
    std::search(vec.begin(), vec.end(), vec.begin(), vec.end(), [](const int first, const int second)
    {
        std::cout << first << ", ";
        return false;
    });
}

void print16(const std::vector<int>& vec) {
    std::search_n(vec.rbegin(), vec.rend(), vec.size(), 0, [](const int first, const int second)
    {
        std::cout << first << ", ";
        return true;
    });
}

