#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact_rec(int n)
{
    if(n==0)
        return 1;
    return n*fact_rec(n-1);
}
int main()
{
    ll n;
    cout<<"Enter the value::";
    cin>>n;
    cout<<fact_rec(n);
    return 0;
}