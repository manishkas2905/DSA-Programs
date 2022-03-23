#include<bits/stdc++.h>
using namespace std;
int count_rec(int n)
{
    return floor(log10(n)+1);
}
int main()
{
    int n;
    cout<<"Enter value of n::";
    cin>>n;
    cout<<count_rec(n);
    return 0;
}