//we always flip the 2nd grp
#include<bits/stdc++.h>
using namespace std;
void flip(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {
            if(arr[i]!=arr[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<(i-1)<<endl;
        }
    }
    if(arr[n-1]!=arr[0])
        cout<<(n-1)<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of an array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    flip(arr,n);
    return 0;
}