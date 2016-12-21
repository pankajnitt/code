//Given an array A[] of n numbers and another number x, 
//determine whether or not there exist two elements in A whose sum is exactly x.
// o(nlog(n)) + o(n)
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
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
		int l = 0, r = n-1;
		while(l < r) {
			if(a[l]  + a[r] == x){
				found = true;
				cout<<"Yes\n";
				break;
			} else if(a[l] + a[r] > x) {
				r--;
			}  else {
				l++;
			}
		}
		if(!found){
			cout<<"No\n";
		}
	}
	return 0;
}

