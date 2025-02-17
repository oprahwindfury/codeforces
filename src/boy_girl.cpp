#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  set<int> s;
  string str;
  cin >> str;
  for(int i = 0; i<str.size(); ++i){
    s.insert(str[i]);
  }

  int l = s.size();
  if(l%2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
  return 0;
}