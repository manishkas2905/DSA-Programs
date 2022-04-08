//Finding HCF of two number naive solution
//TC -> O(min(a,b))
#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
            break;
        res--;
    }
    return res;
}
int main()
{
    int a,b;
    cout<<"Enter two number::";
    cin>>a>>b;
    cout<<"HCF::"<<hcf(a,b);
    return 0;
}