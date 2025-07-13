#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

class MedianFinder {
public:
  std::priority_queue<int> min_heap;
  std::priority_queue<int, std::vector<int>, std::greater<>> max_heap;

  int min = true;
  MedianFinder() {}

  void addNum(int num) {
    if (min) {
      min_heap.emplace(num);
      min = false;
    } else {
      max_heap.emplace(num);
      min = true;
    };
    return;
  }

  double findMedian() {
    int size = min_heap.size();
    int mid = min_heap.size() / 2;
    int k = mid;

    if (size % 2 != 0) {
      std::cout << "odd";
      return max_heap.top();
    };

    int first = 0, second = 0;
    first = min_heap.top();
    second = max_heap.top();

    double median = (double)(first + second) / 2;
    return (double)median;
  };
};

int main() {

  MedianFinder x;

  x.addNum(1);
  x.addNum(2);
  // std::cout << x.findMedian() << std::endl;
  x.addNum(3);

  std::cout << x.findMedian() << std::endl;
  return 0;
}
