#include <iostream>
#include <vector>

class MyHashMap {
public:

  std::vector<std::vector<int>> map;
  MyHashMap() {}

  void put(int key, int value) {

    for (auto num : map) {
      if (num[0] == key) {
        num[1] = value;
        return;
      }
    }

    map.push_back({key, value});
    return;
  }

  int get(int key) {

    for (auto num : map) {
      if (num[0] == key)
        return num[1];
    }
    return -1;
  }

  void remove(int key) {

    if (get(key) == -1)
      return;

    for (auto num : map) {
      if (num[0] == key) {

        num.clear();
        return;
      }
    }
    return;
  }

  void print() {
    for (int i = 0; i < map.size(); i++) {
      std::cout << map[i][0] << "--" << map[i][1] << std::endl;
    }
    std::cout << std::endl;
  }
};

int main() {

  MyHashMap x;
  x.put(1, 1);
  x.put(2, 2);
  x.put(2, 1);

  x.print();
  /**
  std::cout << x.get(1) << std::endl;
  std::cout << x.get(3) << std::endl;
  std::cout << x.get(2) << std::endl;
  x.remove(2);
  std::cout << x.get(2) << std::endl;
*/
  return 0;
}

/**
 *
 * MyHashMap myHashMap = new MyHashMap();
myHashMap.put(1, 1); // The map is now [[1,1]]
myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
myHashMap.get(1);    // return 1, The map is now [[1,1], [2,2]]
myHashMap.get(3);    // return -1 (i.e., not found), The map is now [[1,1],
[2,2]] myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the
existing value) myHashMap.get(2);    // return 1, The map is now [[1,1], [2,1]]
myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
myHashMap.get(2);    // return -1 (i.e., not found), The map is now [[1,1]]
  */
