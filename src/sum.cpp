#include <iostream>
using namespace std;


int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int a,b,c;
		cin >> a >> b >> c;
		int A[3] = {a,b,c};
		for(int i = 0; i<3; ++i){
			if(i==2){
				int sum = A[0] + A[2];
				if(sum == A[1]){
					cout << "YES" << endl;
					break;
				}
				else{
					cout << "NO" << endl;
					break;
				}
			}
			int sum = A[i] + A[i+1];
			if(i == 0){
				if(sum == A[2]){
					cout << "YES" << endl;
					break;
				}
			}
			if(i == 1){
				if(sum == A[0]){
					cout << "YES" << endl;
					break;
				}
			}
			if(sum != A[0] && sum!= A[2])
				cout << "NO" << endl;
		}
	}
	return 0;
}