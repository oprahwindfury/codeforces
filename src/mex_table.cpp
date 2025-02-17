#include <iostream>
using namespace std;

void mex(int a, int b){
	int max;
	if(a>b)
		max = a+1;
	if(b>a)
		max = b+1;
	else
		max = a+1;
	if(a==0 && b==0)
		max = 0;
	cout << max << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i<n; ++i){
		int r, c;
		cin >> r >> c;
		mex(r, c);
	}
}