/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
private:
    bool res;
    int dfs(TreeNode* root) {
        if(root == nullptr) return 0;
        int leftC = dfs(root->left);
        int rightC = dfs(root->right);
        int count = 1 + max(leftC, rightC);
        if(abs(leftC - rightC) > 1) res = false;
        return count;
    }
public:
    bool isBalanced(TreeNode* root) {
        res = true;
        dfs(root);
        return res;
    }
};
