//in this we optimize the auziliary space
#include<bits/stdc++.h>
using namespace std;
int rem_dup(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
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
    n=rem_dup(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}