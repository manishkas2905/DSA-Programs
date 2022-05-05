//left rotate the array by d place
//TC -> theta(nd)
#include<bits/stdc++.h>
using namespace std;
void lrot(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}
void lrotd(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
        lrot(arr,n);
}
int main()
{
    int n,d;
    cout<<"Enter the size of an array::";
    cin>>n;
    cout<<"Enter the value of d::";
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    lrotd(arr,n,d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}