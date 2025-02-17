#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int arr[5][5];
	for(int i = 0; i<5; ++i){
		for(int j = 0; j<5; ++j){
			int val;
			cin >> val;
			arr[i][j] = val;

		}
	}
	int moves;
	for(int i = 0; i<5; ++i){
		for(int j = 0; j<5; ++j){
			if(arr[i][j] == 1){
				moves = abs(i-2) + abs(j-2);
			}
		}
	}
	cout << moves;

}