//Printing divisor of a number but not in order
//TC ->
#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=(n/i))
                cout<<(n/i)<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    divisor(n);
    return 0;
}