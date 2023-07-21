#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2) {
        std::vector<std::string> new_list;
        int min = INT_MAX;
        for (size_t i = 0; i < list1.size(); i++)
        {
            for (size_t j = 0; j < list2.size(); j++)
            {
                if (list1[i] == list2[j])
                {
                    if (i + j < min)
                    {
                        min = i + j;
                        new_list.clear();
                        new_list.push_back(list1[i]);
                    }
                    else if (i + j == min) 
                        new_list.push_back(list1[i]);
                }
            }       
        }
        
        return new_list;
    }
};