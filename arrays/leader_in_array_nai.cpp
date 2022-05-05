//finding leader -> value of array element greater than all the element on the right of it
//TC -> O(n^2)
#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[i])
                flag=true;
        }
        if(flag==false)
            cout<<arr[i]<<" ";
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