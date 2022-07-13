class Solution {
private:
    vector<vector<int>> buildGraph(int numCourses, vector<vector<int>>& prerequisites){
        vector<vector<int>> g(numCourses);
        for(auto p:prerequisites){
            g[p[1]].push_back(p[0]);
        }
        
        return g;
    }
    
    vector<int> computeIndegrees(vector<vector<int>> &g){
        vector<int> degrees(g.size(), 0);
        for(auto adj:g){
            for(int v:adj){
                degrees[v]++;
            }
        }
        return degrees;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> g = buildGraph(numCourses, prerequisites);
        vector<int> degrees = computeIndegrees(g);
        
        for(int i=0;i<numCourses;i++){
            int j=0;
            for(;j<numCourses;j++){
                if(!degrees[j]) break;
            }
            
            if(j==numCourses) return false;
            
            degrees[j]--; 
            for(int v:g[j]) degrees[v]--;
        }
        return true;
    }
};