//moving all zeroes to the end of the array
#include<bits/stdc++.h>
using namespace std;
void mte(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);}
            }
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