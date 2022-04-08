// trailing zero in a factorial
//TS -> log(n)
#include<bits/stdc++.h>
using namespace std;
int trail_eff(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
        res=res+n/i;
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    cout<<trail_eff(n);
    return 0;
}