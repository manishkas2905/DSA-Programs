//checking whether a number is a power of two or not
//TC -> 
#include<bits/stdc++.h>
using namespace std;
bool pot(int n)
{
    if(n==0)
        return false;
    return ((n&(n-1))==0);
    //return (n!=0)&&((n&n(n-1))==0)    -> one line code
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    if(pot(n))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}