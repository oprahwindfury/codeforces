#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

int solve(int n)
{
    if(n == 1){
    	return 2;
    }
    return (n+2)/3;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       cout<<solve(n)<<endl;
    }
    return 0;
}