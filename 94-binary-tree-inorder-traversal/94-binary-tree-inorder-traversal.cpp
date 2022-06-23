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
    void solver(TreeNode* root, vector<int> &ans){
        if(root==NULL) return;
        solver(root->left,ans);
        ans.push_back(root->val);
        solver(root->right, ans);
        
        return;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solver(root, ans);
        return ans;
    }
};