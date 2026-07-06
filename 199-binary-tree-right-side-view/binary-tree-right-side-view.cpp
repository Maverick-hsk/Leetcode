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
    
    void func(TreeNode* node, int level, vector<int> &ds){
        if (node == NULL) return;
        if(ds.size()==level){
            ds.push_back(node->val);
        }
        
        func(node->right, level+1,ds);
        
        func(node->left, level+1, ds);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector <int> ans;
        func(root,0, ans);
        return ans;
    }
};