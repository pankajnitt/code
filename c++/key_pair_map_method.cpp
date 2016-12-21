//Given an array A[] of n numbers and another number x, 
//determine whether or not there exist two elements in A whose sum is exactly x.
// o(n) + o(n)
#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		vector<int> a(n);
		unordered_map<int, bool>  hashmap ;
		for(int i = 0; i< n; i++) {
			cin>>a[i];
			hashmap[a[i]] = 1; 
		}
		 
		bool found = false;
		for(int i = 0; i< n; i++) {
			if(hashmap.find(x- a[i]) != hashmap.end()) {
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

