// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> temp;
        
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                temp.push_back(arr1[i]);
                i++;
            }
            else{
                temp.push_back(arr2[j]);
                j++;
            }
        }
        
        while(i<n){
            temp.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            temp.push_back(arr2[j]);
            j++;
        }
        
        return temp[k-1];
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends