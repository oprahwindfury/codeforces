#include <iostream>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	int n1 = 0, n2 = 0;
	while(tt--){
		int n;
		for(int i = 0; i<n; ++i){
			int w;
			cin >> w;
			if(w == 1)
				n1 += 1;
			if(w == 2)
				n2 += 1;
		}
		if(n1%2 == 0 && n2%2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}	