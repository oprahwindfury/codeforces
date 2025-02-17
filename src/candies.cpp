#include <iostream>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		int ways;
		if(n%2 == 0)
			ways = n/2 - 1;
		else
			ways = (n-1)/2;
		cout << ways << endl;
	}
	return 0;
}