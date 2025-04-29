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
  std::vector<std::vector<int>> levelOrder(TreeNode *root) {
    std::vector<std::vector<int>> res;

    std::vector<int> pair;
    std::deque<TreeNode *> q;

    if (root) {
      q.push_back(root);
    }

    while (q.size() > 0) {
      int len = q.size();
      for (int i = 0; i < len; ++i) {
        TreeNode *node = q.front();
        pair.push_back(node->val);
        q.pop_front();
        if (node->left)
          q.push_back(node->left);
        if (node->right)
          q.push_back(node->right);
      }

      res.push_back(pair);
      pair.clear();
    }
    return res;
  }
};
