//computing power of a number
//TC -> O(log n)
#include<bits/stdc++.h>
using namespace std;
int it_power(int n,int x)
{
    int res=1;
    while(n>0)
    {
        if(x&1)
            res=res*n;
        n=n*n;
        x=x>>1;
    }
    return res;
}
int main()
{
    int n,x;
    cout<<"Enter the number and power::";
    cin>>n>>x;
    cout<<it_power(n,x);
    return 0;
}