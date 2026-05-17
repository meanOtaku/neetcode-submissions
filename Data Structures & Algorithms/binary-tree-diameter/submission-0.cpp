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
    int result;
    int dfs(TreeNode* root) {
        if(root == nullptr) return 0;
        int leftCount = dfs(root->left);
        int rightCount = dfs(root->right);
        result = max(result, leftCount + rightCount);
        int count = 1 + max(leftCount, rightCount);
        return count;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        result = 0;
        dfs(root);
        return result;
    }
};
