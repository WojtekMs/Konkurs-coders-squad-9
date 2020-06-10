#pragma once

#include <algorithm>
#include <numeric>
#include <random>
#include <vector>

void reverse0(std::vector<int>& vec) {
    std::reverse(vec.begin(), vec.end());
}

void reverse1(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::copy(temp.rbegin(), temp.rend(), vec.begin());
}

void reverse2(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::copy_backward(temp.begin(), temp.end(), vec.rend());
}

void reverse3(std::vector<int>& vec) {
    std::vector<int> temp(vec.rbegin(), vec.rend());
    std::move(temp.begin(), temp.end(), vec.begin());
}

void reverse4(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::move_backward(temp.begin(), temp.end(), vec.rend());
}

void reverse5(std::vector<int>& vec) {
    std::vector<int> temp(vec.rbegin(), vec.rend());
    std::generate(vec.begin(), vec.end(), [&temp, i{-1}]() mutable
    {
        return temp[++i];
    });
}

void reverse6(std::vector<int>& vec) {
    std::vector<int> temp(vec.rbegin(), vec.rend());
    vec.swap(temp);
}

void reverse7(std::vector<int>& vec) {
    std::vector<int> temp(vec.rbegin(), vec.rend());
    std::swap(vec, temp);
}

void reverse8(std::vector<int>& vec) {
    std::vector<int> temp(vec.rbegin(), vec.rend());
    std::swap_ranges(vec.begin(), vec.end(), temp.begin());
}

void reverse9(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::reverse_copy(temp.begin(), temp.end(), vec.begin());
}

void reverse10(std::vector<int>& vec) {
    std::vector<int> temp(vec.rbegin(), vec.rend());
    std::sample(temp.begin(), temp.end(), vec.begin(), temp.size(), std::mt19937{std::random_device{}()});
}

void reverse11(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), [](const auto& first, const auto& second){
            return first > second;
    });
}

void reverse12(std::vector<int>& vec) {
    std::vector<int> temp(vec.begin(), vec.end());
    std::transform(temp.rbegin(), temp.rend(), vec.begin(), [](const auto& el){ return el; });
}
