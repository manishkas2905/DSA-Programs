//reversing an array
#include<bits/stdc++.h>
using namespace std;
void rev_arr(int arr[], int n)
{
    int high=n-1,low=0;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        high--;low++;
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
    rev_arr(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}