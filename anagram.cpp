#include <algorithm>

#include "anagram.hpp"


bool is_anagram(std::string first, std::string second){
    std::transform(first.begin(), first.end(), first.begin(),
                   [](unsigned char c) -> unsigned char { return std::tolower(c); });
    std::transform(second.begin(), second.end(), second.begin(),
                   [](unsigned char c) -> unsigned char { return std::tolower(c); });

    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());
    return (first == second);
}
