#pragma once

#include <algorithm>
#include <numeric>
#include <vector>



void reverse1(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::copy(temp.rbegin(), temp.rend(), vec.begin());
}


