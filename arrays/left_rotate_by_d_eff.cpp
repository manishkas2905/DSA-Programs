//left rotate the array by d
//TC -> theta(n) with aux space -> theta(d)
#include<bits/stdc++.h>
using namespace std;
void lrotd(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i]=arr[i];
    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];
    for(int i=0;i<d;i++)
        arr[n-d+i]=temp[i];
}
int main()
{
    int n,d;
    cout<<"Enter the size of an array::";
    cin>>n;
    cout<<"Enter the size of d::";
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    lrotd(arr,n,d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}