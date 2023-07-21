#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool h(std::string s,std::string t){
        std::unordered_map<char, char> hashtable;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (hashtable.find(s[i]) != hashtable.end())
            {
                if(hashtable[s[i]] != t[i]) return false;  
            }
            
            else hashtable[s[i]] = t[i];
        }
        return true;
    };
    
    bool isIsomorphic(std::string s, std::string t) {
        return h(s,t) && h(t,s);
    }
};