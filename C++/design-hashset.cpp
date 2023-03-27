#include <vector>
#include <iostream>

class MyHashSet {
public:
    std::vector<int> ans;
    MyHashSet() {
    }
    void add(int key) {
        bool flag = false;
        for (size_t i = 0; i < ans.size(); ++i)
            if (ans[i] == key) flag = true;

        if(!flag) ans.push_back(key);
    }
    
    void remove(int key) {
        for (size_t i = 0; i < ans.size(); ++i)
            if (ans[i] == key) ans.erase(ans.begin() + i);
    }
    
    bool contains(int key) {
        bool flag = false;
        for (size_t i = 0; i < ans.size(); ++i)
            if (ans[i] == key) flag = true;
            
        return flag;
    }
};
