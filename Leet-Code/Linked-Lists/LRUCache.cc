#include <algorithm>
#include <unordered_map>
#include <vector>

class LRUCache {
public:
  std::vector<int> lru = {};
  int MAX_SIZE = 0;
  std::unordered_map<int, int> cache;

  LRUCache(int capacity) { MAX_SIZE = capacity; };

  int get(int key) {

    if (cache.find(key) != cache.end()) {
      for (size_t i = 0; i < lru.size(); i++) {
        if (lru[i] == key) {
          lru.push_back(lru[i]);
          lru.erase(lru.begin() + i);
          return cache[key];
        };
      }
    }

    return -1;
  }

  void put(int key, int value) {
    if (cache.count(key)) {
      get(key);
      cache[key] = value;
      return;
    }
    if (cache.size() != MAX_SIZE) {
      lru.push_back(key);
      cache[key] = value;
      return;
    }

    for (auto d : cache) {
      if (d.first == lru.front()) {
        cache.erase(lru.front());
        lru.erase(std::remove(lru.begin(), lru.end(), d.first), lru.end());
        lru.push_back(key);
        cache[key] = value;
        return;
      }
    }
  };
};
