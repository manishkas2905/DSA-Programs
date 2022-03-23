#include<bits/stdc++.h>
using namespace std;
bool ispal(int n)
{
    int rev=0;
    int temp=n;
    while(temp>0)
    {
        int r = temp%10;
        rev = rev*10 + r;
        temp=temp/10;
    }
    return (n==rev);
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    if(ispal(n))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}