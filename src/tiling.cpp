#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int total = m*n;
	if(total%2 == 0)
		cout << total/2 << endl;
	else
		cout << (total-1)/2 << endl;
	return 0;
}