#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        int x;
	        cin >> x;
	        ans.push_back(x);
	    }
	    
	    for(int i=n-1; i>=0;i--){
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	    
	}
	return 0;
}