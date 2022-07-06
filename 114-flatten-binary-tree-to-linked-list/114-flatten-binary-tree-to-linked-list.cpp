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
    void preorder(TreeNode* root, vector<TreeNode*> &po){
        if(root==NULL) return;
        
        po.push_back(root);
        preorder(root->left, po);
        preorder(root->right, po);
        
        return;
    }
    
    TreeNode* buildTree(vector<TreeNode*> &po, int index){
        if(index==po.size()) return NULL;
        TreeNode* node = po[index];
        
        node->left = NULL;
        node->right = buildTree(po, index+1);
        
        return node;
    }
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        vector<TreeNode*> po;
        preorder(root, po);
        
        root = buildTree(po, 0);
    }
};