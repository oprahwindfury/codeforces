#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	while(n-- ){
		int a, b, c;
		cin >> a >> b >> c;
		int sum = a+b+c;
		if(sum > 1)
			count++;
	}
	cout << count;
}