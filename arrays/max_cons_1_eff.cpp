//finding maximum length of cons 1
#include<bits/stdc++.h>
using namespace std;
int maxl(int arr[], int n)
{
    int res=0, curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            curr=0;
        else
        {
            curr++;
            res=max(curr,res);
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxl(arr,n);
    return 0;
}