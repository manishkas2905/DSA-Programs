#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(int n)
{
    ll res=1;
    for(ll i=2;i<=n;i++)
        res=res*i;
    return res;
}
int main()
{
    ll n;
    cout<<"Enter the number::";
    cin>>n;
    cout<<fact(n);
    return 0;
}