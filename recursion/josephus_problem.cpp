//finding the last person left -> josephus problem
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
int kill(int n, int k)
{
    if(n==1)
        return 0;
    return (kill(n-1,k)+k)%n;
}
int main()
{
    int n,k;
    cout<<"Enter the number of person::";
    cin>>n;
    cout<<"Enter the person no to kill::";
    cin>>k;
    cout<<kill(n,k);
    return 0;
}