#include <iostream>
using namespace std;

void journey(int num, int A[3]){
	int jour = 0;
	int sum = 0;
	for(int i = 0; i<num; ++i){
		int a = i%3;
		sum += A[a];
		jour += 1;
		if(sum >= num)
			break;
	}
	cout << jour << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i<n; ++i){
		int n, a, b, c;
		cin >> n >> a >> b >> c;
		int arr[3] = {a, b, c};
		journey(n, arr);
	}
}