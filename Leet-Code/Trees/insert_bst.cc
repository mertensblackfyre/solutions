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
  TreeNode *create_node(int val) {
    TreeNode *node = new TreeNode();
    node->val = val;
    node->left = nullptr;
    node->right = nullptr;

    return node;
  };
  TreeNode *insertIntoBST(TreeNode *root, int val) {
    TreeNode *node = create_node(val);
    TreeNode *tmp = root;
    if (!root) {
      root = node;
      return root;
    };

    if (tmp->val > val) {
      if (tmp->left) {
        insertIntoBST(tmp->left, val);
      } else {
        tmp->left = node;
      }
    };

    if (tmp->val < val) {
      if (tmp->right) {
        insertIntoBST(tmp->right, val);
      } else {
        tmp->right = node;
      }
    };
    return root;
  }
};
