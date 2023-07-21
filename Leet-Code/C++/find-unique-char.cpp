#include <iostream>
#include <vector>
#include <unordered_map>


class Solution {
public:
    int firstUniqChar(std::string s) {
        std::unordered_map<char, int> hashtable;
        for (size_t i = 0; i < s.length(); ++i) hashtable[s[i]]++;

        for (size_t i = 0; i < s.length(); i++)
            if(hashtable[s[i]] == 1) return i;
        
        return -1;
    }
};