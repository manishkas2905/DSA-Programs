//checking whether kth bit is set or not
//using left shift
#include<bits/stdc++.h>
using namespace std;
bool check_kth(int n,int k)
{
    //if((n>>(k-1))&1 == 1)     -> right shift
    if(n&(1<<(k-1))!=0)          //left shift
        return true;        
    return false;
}
int main()
{
    int n,k;
    cout<<"Enter the value for n and k::";
    cin>>n>>k;
    if(check_kth(n,k))
        cout<<"Kth Bit is set";
    else
        cout<<"Not set";
    return 0;
}