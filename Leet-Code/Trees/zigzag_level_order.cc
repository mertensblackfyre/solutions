#include <algorithm>
#include <deque>
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
  std::vector<std::vector<int>> zigzagLevelOrder(TreeNode *root) {

    std::vector<std::vector<int>> ans;
    std::deque<TreeNode *> queue;

    if (root) {
      queue.push_back(root);
      ans.push_back({root->val});
    };

    while (!queue.empty()) {
      std::vector<int> tmp;
      int len = queue.size();
      for (int i = 0; i < len; ++i) {
        TreeNode *node = queue.front();
        queue.pop_front();
        if (node->left) {
          queue.push_back(node->left);
          tmp.push_back(node->left->val);
        };
        if (node->right) {
          queue.push_back(node->right);
          tmp.push_back(node->right->val);
        }
      };
      if (ans.size() % 2)
        std::reverse(tmp.begin(), tmp.end());

      if (tmp.empty())
        continue;

      ans.push_back(tmp);
      tmp.clear();
    };
    return ans;
  }
};
