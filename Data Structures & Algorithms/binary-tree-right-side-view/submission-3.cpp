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
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        vector<queue<int>> pvec;
        deque<TreeNode*> dq;
        if(root) {
            dq.push_back(root);
        }
        while(!dq.empty()) {
            queue<int> pq;
            for(int i = 0, len = dq.size(); i < len; i++) {
                TreeNode* node = dq.front();
                dq.pop_front();
                pq.push(node->val);
                if(node->left) {
                    dq.push_back(node->left);
                }
                if(node->right) {
                    dq.push_back(node->right);
                }
            }
            pvec.push_back(pq);
        }
        for(auto a: pvec) {
            result.push_back(a.back());
        }
        return result;
    }
};
