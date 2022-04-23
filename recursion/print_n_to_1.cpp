//printing a number from n to 1
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
void nto1(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    nto1(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    nto1(n);
    return 0;
}