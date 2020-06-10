#pragma once

#include <algorithm>
#include <numeric>
#include <vector>



void reverse1(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::copy_backward(temp.begin(), temp.end(), vec.end());

}
