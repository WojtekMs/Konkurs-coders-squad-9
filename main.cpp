#include <iostream>

#include "task1.hpp"

void print(const std::vector<int>& vec) {
    for (const auto elem : vec) {
        std::cout << elem << ", ";
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    reverse12(vec);
    print(vec);

}