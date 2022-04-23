//converting a decimal number to binary
#include<bits/stdc++.h>
using namespace std;
void dtb(int n)
{
    if(n==0)
        return;
    dtb(n/2);
    cout<<n%2<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    dtb(n);
    return 0;
}