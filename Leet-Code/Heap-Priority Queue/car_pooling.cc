

#include <algorithm>
#include <vector>

class Solution {
public:
  bool carPooling(std::vector<std::vector<int>> &trips, int capacity) {
    int check = 0;
    int ipos = 0;
    int fpos = 0;

    std::sort(trips.begin(), trips.end(),
              [](const std::vector<int> &a, const std::vector<int> &b) {
                return a[1] < b[1];
              });

    int i = 0;
    fpos = trips[i+1][2];
  
    return false;
  };
};

int main(int argc, char *argv[]) {

  Solution x;

  std::vector<std::vector<int>> trips = {{2, 1, 5}, {3, 3, 7}};
  x.carPooling(trips, 4);

  return 0;
}
