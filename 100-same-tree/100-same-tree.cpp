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
    void inorder(TreeNode* t, vector<int> &rt){
        if(t==NULL) {
            rt.push_back(0);
            return;
        }
        rt.push_back(t->val);
        inorder(t->left, rt);
        inorder(t->right, rt);
        
        return;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==NULL && q!=NULL) || (p!=NULL && q==NULL)) return false;
        
        vector<int> rp,rq;
        inorder(p,rp);
        inorder(q,rq);
        
        if(rp==rq) return true;
        return false;
    }
};