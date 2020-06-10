#pragma once

#include <algorithm>
#include <iostream>
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

void print17(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::copy_if(vec.begin(), vec.end(), v.begin(), [](const int first)
    {
        std::cout << first << ", ";
        return true;
    });
}

void print18(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::generate(v.begin(), v.end(), [&vec, i{0}]() mutable
    {
        std::cout << vec[i++] <<  ", ";
        return true;
    });
}

void print19(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::generate_n(v.begin(), v.size(), [&vec, i{0}]() mutable
    {
        std::cout << vec[i++] <<  ", ";
        return true;
    });
}

void print20(std::vector<int>& vec) {
    std::remove_if(vec.begin(), vec.end(), [](const int elem)
    {
        std::cout << elem <<  ", ";
        return false;
    });
}

void print21(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::remove_copy_if(vec.begin(), vec.end(), v.begin(), [](const int elem)
    {
        std::cout << elem <<  ", ";
        return false;
    });
}

void print22(std::vector<int>& vec) {
    std::replace_if(vec.begin(), vec.end(), [](const int elem)
    {
        std::cout << elem <<  ", ";
        return false;
    }, 0);
}

void print23(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::replace_copy_if(vec.begin(), vec.end(), v.begin(), [](const int elem)
    {
        std::cout << elem <<  ", ";
        return false;
    }, 0);
}

void print24(std::vector<int>& vec) {
    std::unique(vec.begin(), vec.end(), [i{0}](const int first, const int second) mutable
    {
        if(i == 0) {
            std::cout << first << ", ";
        }
        i++;
        std::cout << second <<  ", ";
        return false;
    });
}

void print25(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::unique_copy(vec.begin(), vec.end(), v.begin(), [i{0}](const int first, const int second) mutable
    {
        if(i == 0) {
            std::cout << first << ", ";
        }
        i++;
        std::cout << second <<  ", ";
        return false;
    });
}

void print26(const std::vector<int>& vec) {
    std::is_partitioned(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element <<  ", ";
        return false;
    });
}

void print27(std::vector<int>& vec) {
    std::partition(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element <<  ", ";
        return true;
    });
}

void print28(const std::vector<int>& vec) {
    std::vector<int> v(vec.size());
    std::partition_copy(vec.begin(), vec.end(), v.begin(), v.end(), [](const int element)
    {
        std::cout << element <<  ", ";
        return true;
    });
}

void print29(std::vector<int>& vec) {
    std::stable_partition(vec.begin(), vec.end(), [](const int element)
    {
        std::cout << element <<  ", ";
        return true;
    });
}

void print30(const std::vector<int>& vec) {
    std::is_sorted(vec.begin(), vec.end(), [i{0}](const int second, const int first) mutable
    {
        if(i == 0) {
            std::cout << first << ", ";
        }
        i++;
        std::cout << second <<  ", ";
        return false;
    });
}

void print31(std::vector<int>& vec) {
    std::is_sorted(vec.begin(), vec.end(), [i{0}](const int second, const int first) mutable
    {
        if(i == 0) {
            std::cout << first << ", ";
        }
        i++;
        std::cout << second <<  ", ";
        return false;
    });
}

void print32(std::vector<int>& vec) {
    std::partial_sort(vec.begin(), vec.begin(), vec.end(), [](const int second, const int first)
    {
        std::cout << second <<  ", ";
        return false;
    });
}

void print33(const std::vector<int>& vec) {
    std::for_each_n(vec.begin(), vec.size(), [](const int element)
    {
        std::cout << element << ", ";
    });
}