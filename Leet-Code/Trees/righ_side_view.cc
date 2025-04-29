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
  std::vector<int> rightSideView(TreeNode *root) {
    std::deque<TreeNode *> queue;

    std::vector<int> ans;
    std::vector<int> pair;

    if (root)
      queue.push_front(root);

    while (queue.size() > 0) {
      int length = queue.size();
      for (int i = 0; i < length; i++) {
        TreeNode *node = queue.front();

        pair.push_back(node->val);
        queue.pop_front();

        if (node->left)
          queue.push_back(node->left);
        if (node->right)
          queue.push_back(node->right);
      };
      int x = pair.back();
      ans.push_back(x);
      pair.clear();
    };

    return ans;
  };
};
