#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x = 0;
	while(n--){
		string stat;
		cin >> stat;
		if(stat == "++X" || stat == "X++")
			++x;
		else
			--x;
	}
	cout << x;	
	cin.get();
}