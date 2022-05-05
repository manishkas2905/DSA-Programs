//by using prefix sum technique
#include<bits/stdc++.h>
using namespace std;
int appear(int l[], int r[], int n)
{
    int arr[1000];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maxm=arr[0],res=0;
    for(int i=1;i<1000;i++)
    {
        arr[i]+=arr[i-1];
        if(maxm<arr[i])
        {
            maxm=arr[i];
            res=i;
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an arrays::";
    cin>>n;
    int l[n],u[n];
    cout<<"Enter the range for lower bound of all::";
    for(int i=0;i<n;i++)
        cin>>l[i];
    cout<<"Enter the range for upper bound of all::";
    for(int i=0;i<n;i++)
        cin>>u[i];
    cout<<appear(l,u,n);
    return 0;
}