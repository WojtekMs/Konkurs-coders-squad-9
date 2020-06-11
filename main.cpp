#include <cassert>

#include "anagram.hpp"
 

int main(){
    assert((is_anagram("asdaf", "aadsf")));
    assert((is_anagram("ASFAD", "DSFAA")));
    assert((is_anagram("AsAfD", "DsaFa")));
    assert((is_anagram("yzx", "YZX")));
    assert((is_anagram("aaa", "aaa")));
    assert((is_anagram("", "")));
    assert(!(is_anagram("abcd", "dcA")));
    assert(!(is_anagram("abcd", "")));


    return 0;
}