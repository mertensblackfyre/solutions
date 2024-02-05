#include <climits>
#include <cstring>
#include <iostream>
#include <vector>

class MinStack {
public:
  std::vector<int> stack;
  MinStack(){};

  void push(int val) { stack.push_back(val); }

  void pop() { stack.pop_back(); }

  int top() { return stack.back(); }

  int getMin() {
    int min = INT_MAX;
    for (int n : stack) {
      if (n < min)
        min = n;
    }
    return min;
  };
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main(int argc, char *argv[]) {

  MinStack x;

  return 0;
}
