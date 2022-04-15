//finding two odd occuring number
//TC -> 
#include<bits/stdc++.h>
using namespace std;
void two_odd(int arr[], int n)
{
    int xo=0,res1=0,res2=0;
    for(int i=0;i<n;i++)
        xo=xo^arr[i];
    int sb=xo&~(xo-1);      //finding rightmost set bit
    for(int i=0;i<n;i++)
    {
        if((sb&arr[i])!=0)
            res1=res1^arr[i];
        else
            res2=res2^arr[i];
    }
    cout<<res1<<" "<<res2;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    cout<<"Enter the value in an array::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    two_odd(arr,n);
    return 0;
}