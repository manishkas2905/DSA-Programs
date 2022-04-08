//Priting all divisor of a number in order and effeciently
//TC -> theta(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    int i;
    for(i=1;i*i<n;i++)
        if(n%i==0)
            cout<<i<<" ";
    for(;i>=1;i--)
        if(n%i==0)
            cout<<(n/i)<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    divisor(n);
    return 0;
}