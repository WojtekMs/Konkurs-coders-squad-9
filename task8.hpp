#pragma once
#include <iostream>


void print_spaces(int count) {
    if (count < 1) {
        return;
    }
    std::cout << " ";
    print_spaces(--count);
}

void print_stars(int count) {
    if (count < 1) {
        return;
    }
    std::cout << "*";
    print_stars(--count);
}

void draw_tree(int height) {
    const int rows = height * 2 - 1;
    if (rows < 1) {
        return;
    }

    draw_tree(--height);
    if (rows % 2) {
        int space_count = 6 - rows / 2;
        print_spaces(space_count);
        print_stars(rows);
        std::cout << "\n";
    }
}