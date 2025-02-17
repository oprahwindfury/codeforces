// No result when more than two consecutive letters are present in the string.


#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  int count = 0;
  string str;
  cin >> n;
  cin >> str;

  for(int i = 1; i<n; ++i){
    if(str[i] == str[i-1]){
      str.erase(str.begin() + i);
      ++count;
    }
  }
  cout << count;
  return 0;
}