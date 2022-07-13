class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        vector<int> left, right;
        int ls=0, rs=0;
        
        for(int i=0,j=nums.size()-1; i<nums.size();i++,j--){
            ls += nums[i];
            rs += nums[j];
            left.push_back(ls);
            right.push_back(rs);
        }
        
        for(int i=0, j=right.size()-1;i<left.size();i++,j--){
            if(left[i]==right[j]) return i;
        }
        
        return -1;
    }
};