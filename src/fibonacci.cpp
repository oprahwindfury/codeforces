#include <iostream>
using namespace std;

void fibonacci(int A[4]){
	int max;
	int a, b, c;
	a = A[0] + A[1];
	b = A[2] - A[1];
	c = A[3] - A[2];
	if(a==b && b==c)
		max = 3;
	if(a==b && b!=c)
		max = 2;
	if(b==c && a!=b)
		max = 2;
	if(a!=b && b!=c && a==c)
		max = 2;
	if(a!=b && b!=c && a!=c)
		max = 1;
	cout << max << endl;
}

int main(){
	int n;
	cin >> n;
	for (int i = 1; i<=n; ++i){
		int arr[4];
		int a = 0;
		while(a<4){
			int num;
			cin >> num;
			arr[a] = num;
			a++;
		}
		fibonacci(arr);
	}
}