//leader-> all the element of current element should be lower than current, it is in reverse order
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
void leader(int arr[], int n)
{
    int curr=arr[n-1];
    cout<<curr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>curr)
        {
            curr=arr[i];
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leader(arr,n);
    return 0;
}