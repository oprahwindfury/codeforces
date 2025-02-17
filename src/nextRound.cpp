#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;	
	int arr[n];
	for(int i = 0; i<n; ++i){
		int score;
		cin >> score;
		arr[i] = score;
	}
	int qual = k;
	int min = arr[k-1];

	for(int i = k; i<n; ++i){
		if (n == 0 || k == 0){
			qual = 0;
			break;
		}
		if(arr[k-1] == 0){
			if(arr[k-2] == 0){
				qual = 0;
				break;
			}
			else{
				qual = k-1;
				break;
			}
			break;
		}
		if(arr[i] == min)
			qual += 1;
		else
			break;
	}
	cout << qual;
	return 0;
}	