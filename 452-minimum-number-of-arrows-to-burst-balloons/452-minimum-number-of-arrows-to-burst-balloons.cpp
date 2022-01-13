class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        
        int start = points[0][0];
        int end = points[0][1];
        
        int res=1;
        for(auto p: points){
            if(p[0]<=end){
                start = max(start, p[0]);
                end = min(end,p[1]);
            }
            else{
                res++;
                start = p[0];
                end = p[1];
            }
        }
        return res;
    }
};