//left rotate the array by d
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
void rot(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;high--;
    }
}
void lrotd(int arr[],int n,int d)
{
    rot(arr,0,d-1);
    rot(arr,d,n-1);
    rot(arr,0,n-1);
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