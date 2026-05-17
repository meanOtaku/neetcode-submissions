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
    map<int, vector<int>> umap;
    void heightOfTree(TreeNode* root, int count) {
        if(root == nullptr) return;
        heightOfTree(root->left, count+1);
        heightOfTree(root->right, count+1);
        if(umap.find(count) != umap.end()) {
            umap[count].push_back(root->val);
        }else {
            vector<int> temp;
            temp.push_back(root->val);
            umap[count] = temp;
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        heightOfTree(root, 0);
        vector<vector<int>> result;
        for(auto i = umap.begin(); i != umap.end(); i++) {
            result.push_back(i->second);
        }

        return result;
    }
};
