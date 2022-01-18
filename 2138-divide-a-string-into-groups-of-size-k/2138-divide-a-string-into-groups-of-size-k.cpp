class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0;i<s.length();i+=k){
            ans.push_back(s.substr(i, k));
        }
        
        int n = ans.size()-1;
        if(ans[n].length()!=k){
            while(ans[n].length()!=k){
                ans[n]+=fill;
            }
        }
        return ans;
    }
};