//Given an array A[] of n numbers and another number x, 
//determine whether or not there exist two elements in A whose sum is exactly x.
// binary search method
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		vector<int> a(n);
		for(int i = 0; i< n; i++) {
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		bool found = false;
		for(int i=0;i<n;i++){
			if(binary_search(a.begin() + i , a.end(), x - a[i])){
				cout<<"Yes\n";
				found = true;
				break;
			}
		}
		if(!found){
		cout<<"No\n";
		}
	}
	return 0;
}
