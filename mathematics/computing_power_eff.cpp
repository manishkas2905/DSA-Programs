//computing power of a number 
//TC -> theta(log(x))
#include<bits/stdc++.h>
using namespace std;
int power(int n,int x)
{
    if(x==0)
        return 1;
    int temp=power(n,x/2);
    temp=temp*temp;
    if(x%2==0)
        return temp;
    else
        return temp*n;
}
int main()
{
    int n,x;
    cout<<"Enter the number and power::";
    cin>>n>>x;
    cout<<power(n,x);
    return 0;
}