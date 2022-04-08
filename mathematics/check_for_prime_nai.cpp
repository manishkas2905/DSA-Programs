//check for prime naive solution
//TC -> O(n)
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==1)
        return false;
    for(int i=2;i<n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    if(isprime(n))
        cout<<"Prime number";
    else
        cout<<"Not prime number";
    return 0;
}