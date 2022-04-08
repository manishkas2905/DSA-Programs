//Printing prime factor of a number
//TC -> 
#include<bits/stdc++.h>
using namespace std;
void prime_factor(int n)
{
    if(n<1)
        return;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)
        cout<<n;
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    prime_factor(n);
    return 0;
}