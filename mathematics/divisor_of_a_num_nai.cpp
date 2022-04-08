//Printing all the divisor of a number
//TC -> theta(n) and auxiliary space -> theta(1)
#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    for(int i=1;i<=n;i++)
        if(n%i==0)
            cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    divisor(n);
    return 0;
}