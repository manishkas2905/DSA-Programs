//how many 1's in a binary representation of a number
//TC -> theta(total_bit)
#include<bits/stdc++.h>
using namespace std;
int count_sb(int n)
{
    int res=0;
    while(n>0)
    {
        if((n&1)==1)
            res++;
        n=n>>1;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    cout<<count_sb(n);
    return 0;
}