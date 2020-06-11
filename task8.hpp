#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

void print_spaces(int count) {
    std::vector<int> temp(count);
    std::transform(temp.begin(), temp.end(), temp.begin(), [](int elem) {
        std::cout << " ";
        return 0;
    });
}

void print_stars(int count) {
    std::vector<int> temp(count);
    std::transform(temp.begin(), temp.end(), temp.begin(), [](int elem) {
        std::cout << "*";
        return 0;
    });
}

void draw_tree(int height) {
    const int rows = height * 2 - 1;
    std::vector<int> vec(rows);
    std::transform(vec.begin(), vec.end(), vec.begin(), [row{1}](int elem) mutable {
        if (row % 2) {
            int space_count = 6 - row / 2;
            print_spaces(space_count);
            int star_count = row;
            print_stars(star_count);
            std::cout << '\n';
        }
        return row++;
    });
}