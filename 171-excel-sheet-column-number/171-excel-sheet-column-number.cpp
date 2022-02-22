class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(auto &it: columnTitle){
            res *= 26;
            res += it - 'A' + 1;
        }
        
        return res;
    }
};