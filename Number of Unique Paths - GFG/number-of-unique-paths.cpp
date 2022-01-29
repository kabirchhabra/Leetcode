// { Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    private:
    void helper(int a, int b, int x, int y, int& ans){
        if(x==a && y==b) ans++;
        if(x>a  || y>b) return;
        
        helper(a, b, x+1, y, ans);
        helper(a, b, x, y+1, ans);
        
        return;
    }
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        int ans=0;
        helper(a,b,1,1,ans);
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends