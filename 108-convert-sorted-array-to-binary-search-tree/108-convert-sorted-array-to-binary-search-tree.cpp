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
    TreeNode* solve(vector<int> nums, int start, int end){
        
        if(start>end) return NULL;
        
        int mid = (start+end)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = solve(nums, start, mid-1);
        node->right = solve(nums, mid+1, end);
        
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        TreeNode* root = solve(nums, start, end);
        
        return root;
    }
};