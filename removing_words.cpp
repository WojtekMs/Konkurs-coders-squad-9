#include <algorithm>
#include <cctype>
#include <iostream>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

std::string removeWords(const std::string& sentence) {
    std::istringstream ss(sentence);
    std::vector<std::string> results((std::istream_iterator<std::string>(ss)),
                                     std::istream_iterator<std::string>());

    results.erase(std::remove_if(results.begin(), results.end(),
                                 [](std::string str) {
                                     return (str.length() == 4 and not std::ispunct(str.back())) ||
                                            (str.length() == 6 and not std::ispunct(str.back())) ||
                                            (str.length() == 5 and std::ispunct(str.back())) ||
                                            (str.length() == 7 and std::ispunct(str.back()));
                                 }),
                  results.end());
    auto add_spaces = [](std::string a, std::string b) {
        return std::move(a) + " " + b;
    };
    return std::accumulate(std::next(results.begin()), results.end(), results.front(), add_spaces) + ".";
}

int main() {
    std::string str = "Ala ma kota a kot ma Ale, jednak to było dawno temu.";
    auto result = removeWords(str);
    std::cout << result << "\n";
}
