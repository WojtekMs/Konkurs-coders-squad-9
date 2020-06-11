#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

std::string deleteDuplicats(std::string& str){
    std::istringstream ss(str);
    std::vector<std::string> vec((std::istream_iterator<std::string>(ss)),
    std::istream_iterator<std::string>());
    auto last = std::unique(vec.begin(), vec.end(), [](const std::string& first, const std::string& second)
    {
        std::string temp_first(first);
        std::string temp_second(second);
        auto last1 = std::remove_copy_if(first.begin(), first.end(), temp_first.begin(), 
        [](const unsigned char element)
        {
            return std::ispunct(static_cast<unsigned char>(element));
        });
        auto last2 = std::remove_copy_if(second.begin(), second.end(), temp_second.begin(), 
        [](const unsigned char element)
        {
            return std::ispunct(static_cast<unsigned char>(element));
        });
        temp_first.erase(last1, temp_first.end());
        temp_second.erase(last2, temp_second.end());
        return temp_first == temp_second;
    });
    vec.erase(last, vec.end());
    
    return std::accumulate(std::next(vec.begin()), vec.end(), vec.front(), [](std::string a, std::string b){
        return std::move(a) + " " + b;
    });

}


int main(){
    std::string str{"Ala ma ma kota, a kot ma ma Ale Ale."};
    std::cout << deleteDuplicats(str);
    return 0;

}
