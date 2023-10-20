#include <bits/stdc++.h>
#include <iostream>
#include <vector>

class MyHashSet {
  std::vector<int> set;
public:
  MyHashSet() {}

  void add(int key) {

    if (contains(key))
      return;

    set.push_back(key);
  }

  void remove(int key) {
    auto it = std::find(set.begin(), set.end(), key);
    if (it != set.end())
      set.erase(it);
  }

  bool contains(int key) {
    for (int num : set) {
      if (num == key)
        return true;
    }
    return false;
  }
};
