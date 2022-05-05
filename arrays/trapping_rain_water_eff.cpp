//trapping rain water
#include<bits/stdc++.h>
using namespace std;
int water(int arr[], int n)
{
    int res=0;
    int lmax[n], rmax[n];
    //finding lmax -> left max
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],arr[i]);
    //finding rmax -> right maax
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],arr[i]);
    //computing the water that we store on the particular block
    for(int i=1;i<n-1;i++)
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number of blocks::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<water(arr,n);
    return 0;
}