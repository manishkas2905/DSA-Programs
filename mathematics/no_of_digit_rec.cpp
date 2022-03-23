#include<bits/stdc++.h>
using namespace std;
int count_rec(int n)
{
    if(n==0)
        return 0;
    return 1+count_rec(n/10);
}
int main()
{
    int n;
    cout<<"Enter value of n::";
    cin>>n;
    cout<<count_rec(n);
    return 0;
}