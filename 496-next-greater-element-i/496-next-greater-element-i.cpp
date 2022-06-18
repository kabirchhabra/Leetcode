class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> ans;
        
        for(int i=nums2.size()-1; i>=0; i--) s.push(nums2[i]);
        
        for(int i=0; i<nums1.size(); i++){
            stack<int> s1 = s;
            while(s1.top()!=nums1[i]) s1.pop();
            s1.pop();
            int max=-1;
            while(!s1.empty()){
                if(s1.top() > nums1[i]){
                    max = s1.top();
                    break;
                }
                s1.pop();
            }
            ans.push_back(max);
        }
        
        return ans;
    }
};