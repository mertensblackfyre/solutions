
#include <deque>
#include <iostream>
#include <queue>
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
    std::vector<int> result;
    std::deque<TreeNode *> queue;

    if (root) {
      result.push_back(root->val);
      queue.push_back(root);
    }
    while (queue.size() > 0) {
      for (size_t i = 0; i < queue.size(); i++) {
        TreeNode *curr = queue.front();
        queue.pop_front();

        if (curr->right) {
          result.push_back(curr->right->val);
          queue.push_back(curr->right);
        }
      }
    }

    return result;
  }
};

/*
class Solution {
public:
    std::vector<int> helper(TreeNode* root, std::vector<int> result) {

        if (root && root->right) {
            result.push_back(root->right->val);
            result = helper(root, result);
        };

        return result;
    }
    vector<int> rightSideView(TreeNode* root) {
        std::vector<int> result;
        helper(root, result);

        return result;
    }
};
*/
