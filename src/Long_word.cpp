#include <iostream>
using namespace std;

void abbreviations(string str){
	int l = str.length();
	if(l <= 10)
		cout << str << endl;
	else
		cout << str[0] << l-2 << str[l-1] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string word;
		cin >> word;
		abbreviations(word);
	}
}