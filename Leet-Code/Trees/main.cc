
#include <deque>
#include <iostream>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  std::vector<std::vector<int>> levelOrder(TreeNode *root) {

    std::vector<std::vector<int>> som;
    std::deque<TreeNode*> queue;

    if (root && queue.empty()) 
    {

      som.push_back({root->val});
      queue.push_back(root);
    }

    while (queue.size() < 0) {
      for (size_t i = 0; i < queue.size(); i++) {
        TreeNode *curr = queue.front();
        queue.pop_front();
        if (curr->left && curr->right) {
          som.push_back({curr.left->val, curr.right->val});
        } else if (curr.left && !curr->right) {
          som.push_back({curr.left->val});
        } else {
          som.push_back({curr.right->val});
        }
      }
    }

    return som;
  }
};
