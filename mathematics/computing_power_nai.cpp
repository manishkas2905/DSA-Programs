//calculate power of a number
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
int power(int n,int x)
{
    int res=1;
    for(int i=0;i<x;i++)
        res=res*n;
    return res;
}
int main()
{
    int n,x;
    cout<<"Enter the number and the power::";
    cin>>n>>x;
    cout<<power(n,x);
    return 0;
}