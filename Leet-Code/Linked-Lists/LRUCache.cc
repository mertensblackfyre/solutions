#include <iostream>
#include <unordered_map>

class LRUCache {
public:
  typedef struct Data {
    int value;
    int accessed;

  } Data;

  int MAX_SIZE = 0;
  std::unordered_map<int, Data *> cache;
  int recently_used_key = 0;
  int x = 0;

  LRUCache(int capacity) { MAX_SIZE = capacity; };

  void trackRU() {
    int min = 900;

    for (auto d : cache)
      if (d.second->accessed < min)
        min = d.second->accessed;

    recently_used_key = min;
  };
  int get(int key) {

    if (cache.find(key) != cache.end()) {
      cache[key]->accessed++;
      trackRU();
      return cache[key]->value;
    }

    return -1;
  }

  void put(int key, int value) {

    Data *data = new Data();
    data->value = value;
    data->accessed = x++;

    trackRU();

    if (cache.size() != MAX_SIZE) {
      cache[key] = data;
      return;
        }

    for (auto d : cache) {
      if (d.second->accessed == recently_used_key) {
        cache.erase(d.first);
        cache[key] = data;
        return;
      }
    }
  };

  void print() {
    for (auto d : cache) {
      std::cout << "Key: " << d.first << ", Value: " << d.second->value
                << ", Times accessed: " << d.second->accessed << std::endl;
    }
  };
};

// ["LRUCache","put","put","get","put","put","get"]
// [[2],[2,1],[2,2],[2],[1,1],[4,1],[2]]

int main(void) {
  LRUCache *lRUCache = new LRUCache(2);

  lRUCache->put(2, 1);
  lRUCache->put(2, 2);
  std::cout << "GET CALLED -> " << lRUCache->get(2) << std::endl;

  lRUCache->put(1, 1);

  lRUCache->put(4, 1);
  lRUCache->print();
}
