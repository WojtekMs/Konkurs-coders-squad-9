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
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
    
    return std::accumulate(std::next(vec.begin()), vec.end(), vec.front(), [](std::string a, std::string b){
        return std::move(a) + " " + b;
    });

}


int main(){
    std::string str{"Ala ma kota kot ma Ale Ale"};
    std::cout << deleteDuplicats(str);
    
    return 0;
}
