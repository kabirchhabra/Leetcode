// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int nums[], int n)  { 
	    // Your code goes here
	    int s=0,i,j;
        for(i=0;i<n;i++) 
        s+=nums[i];
        int k=s;
        bool dp[n+1][k+1];
        vector<int> v;
        for(i=0;i<n+1;i++) 
        {
            for(j=0;j<k+1;j++) 
            {
                if(i==0) 
                    dp[i][j]=false;
                if(j==0) 
                    dp[i][j]=true;
            }
        }
        for(i=1;i<n+1;i++) 
        {
            for(j=1;j<k+1;j++)
            {
                if(j>=nums[i-1]) {
                    dp[i][j]=(dp[i-1][j-nums[i-1]] || dp[i-1][j]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        int mini=INT_MAX;
        for(i=0;i<k/2+1;i++) 
        {
            if(dp[n][i])
            v.push_back(i);
        }
         for(i=0;i<v.size();i++) 
         mini=min(mini,(abs(s-2*v[i])));
        return mini; 
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends