class Solution {
public:
    std::vector<int> h(TreeNode* root, std::vector<int> ans) {
        if (root == NULL)
            return ans;

        ans = h(root->left, ans);
        ans.push_back(root->val);
        ans = h(root->right, ans);
        return ans;
    };
    int kthSmallest(TreeNode* root, int k) {
        std::vector<int> ans;
        ans = h(root, ans);
        return ans[k - 1];
    }
};
