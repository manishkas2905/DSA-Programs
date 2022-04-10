//To count the number of set bit mean number of 1's
//TC -> theta(total set bit)
//It remove bit from the right side one by one
#include<bits/stdc++.h>
using namespace std;
int count_sb(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1));
        res++;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the value::";
    cin>>n;
    cout<<count_sb(n);
    return 0;
}