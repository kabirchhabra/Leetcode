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
	    
	    int i=0;
	    int j = n-1;
	    while(i<j){
	        int temp = ans[i];
	        ans[i] = ans[j];
	        ans[j] = temp;
	        i++;
	        j--;
	    }
	    
	    for(int i=0;i<n;i++){
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}