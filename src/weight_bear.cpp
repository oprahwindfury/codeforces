#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  int count = 0;
  cin >> a >> b;
  while(a<=b){
    a = a*3;
    b = b*2;
    ++count;
  }

  cout << count << "\n";
  return 0;
}