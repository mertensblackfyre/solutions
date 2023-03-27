#include <vector>
#include <iostream>

class MyHashMap {
public:
    std::vector<std::vector<int>> vect;
    void put(int key, int value) 
    {
        for (size_t i = 0; i < vect.size(); ++i)
        {
            if (vect[i][0] == key) 
            {
                vect[i][1] = value;
                vect.erase(vect.begin() + i);
            }
        }
                
        vect.push_back({key,value});
    }
    
    int get(int key) 
    {
        int flag = -1;
        for (size_t i = 0; i < vect.size(); ++i)
            if (vect[i][0] == key) flag = vect[i][1];
        return flag;
    }
    
    void remove(int key)
    {
        int flag = 0;
        for (size_t i = 0; i < vect.size(); ++i)
            if (vect[i][0] == key) vect.erase(vect.begin() + i);
    }
};
 