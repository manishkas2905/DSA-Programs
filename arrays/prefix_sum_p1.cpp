//prefix sum techniques 
#include<bits/stdc++.h>
using namespace std;
int getsum(int psum[], int l,int r)
{
    if(l!=0)
        return (psum[r]-psum[l]);
    else
        return psum[r];
}
int sum(int arr[], int n,int l, int r)
{
    int psum[n];
    psum[0]=arr[0];
    for(int i=1;i<n;i++)
        psum[i]=arr[i]+psum[i-1];
    return getsum(psum,l,r);
}
int main()
{
    int n,l,r;
    cout<<"Enter the size of an array::";
    cin>>n;
    cout<<"Enter the value for left and right::";
    cin>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<sum(arr,n,l,r);
    return 0;
}