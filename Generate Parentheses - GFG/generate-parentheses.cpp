// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string>vs;
    void sol(string op,int open,int close){
       if(open==0 && close==0){
           vs.push_back(op);
           return;
       }
       if(open!=0){
           string op1=op;
           op1.push_back('(');
           sol(op1,open-1,close);
       }
       if(close>open){
           string op2=op;
           op2.push_back(')');
           sol(op2,open,close-1);
       }
       return ;
   }
   vector<string> AllParenthesis(int n) 
   {
       // Your code goes here    
       string s;
       sol(s,n,n);
       return vs;
   }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends