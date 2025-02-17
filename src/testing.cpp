#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i<n; ++i){
		int val;
		cin >> val;
		v.push_back(val);
	}
	for(int i = 0; i<n; ++i){
		cout << v[i] << "\n";
	}
}