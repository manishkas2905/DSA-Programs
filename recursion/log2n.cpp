//program to find the base 2 of a given number
#include<bits/stdc++.h>
using namespace std;
int base2(int n)
{
    if(n==1)
        return 0;
    return 1+base2(n/2);
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    cout<<base2(n);
    return 0;
}