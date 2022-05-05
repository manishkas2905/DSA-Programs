//moving zeroes to end efficient solution
#include<bits/stdc++.h>
using namespace std;
void mte(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
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
    mte(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}