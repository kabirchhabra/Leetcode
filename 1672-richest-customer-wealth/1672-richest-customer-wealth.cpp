class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int Maxsum=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            Maxsum = max(Maxsum,accumulate(accounts[i].begin(), accounts[i].end(), sum));
        }
        return Maxsum;
    }
};