#include<bits/stdc++.h>
using namespace std;
int cound(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter value of n::";
    cin>>n;
    cout<<cound(n);
    return 0;
}