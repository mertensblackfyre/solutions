#include <iostream>
#include <bits/stdc++.h>
#include <sstream> 
#include <string> 


class Solution {
public:
    bool isPalindrome(int x) {
        
        std::ostringstream str;
        str << x;
        std::string num_str = str.str();

        std::reverse(num_str.begin(), num_str.end());

        if (num_str.compare(str.str()) == 0)
            return true;
        
        return false;
    }
};




int main()
{
    Solution r;
    r.isPalindrome(-123);
    return 0;
}