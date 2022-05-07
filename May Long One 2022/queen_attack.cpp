//The Attack of Queen

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9 + 7


int main()
{
    ios::sync_with_stdio(0); cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,v;
        cin>>n>>s>>v;
        int res_=0;
        res_ += 2*(n-1);
        int abc = min(s-1,v-1), bcd=min(s-1,n-v), cde=min(n-s,v-1), def=min(n-s,n-v);
        res_ += abc+bcd+cde+def;
        cout<<res_<<"\n";
    }
}