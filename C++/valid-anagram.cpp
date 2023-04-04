#include <iostream>
#include <unordered_map>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char,int> S;
        std::unordered_map<char,int> T;

        if(s.size() != t.size()) return false;

        for (size_t i = 0; i < s.size(); ++i)
        {
            S[s[i]]++;
            T[t[i]]++;
        }

        for(size_t i = 0; i < S.size(); ++i)
            if(S[i] != T[i]) return false;

        return true;
    }
};