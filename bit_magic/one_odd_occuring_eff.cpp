//finding only one odd occuring number
//TC -> theta(n)
#include<bits/stdc++.h>
using namespace std;
int odd_occ(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
        res=res^arr[i];
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    cout<<"Enter elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<odd_occ(arr,n);
    return 0;
}