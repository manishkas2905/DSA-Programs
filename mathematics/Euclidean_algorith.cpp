//To find the hcf of two number
//TC ->
#include<bits/stdc++.h>
using namespace std;
int hcf_eff(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
int main()
{
    int b,a;
    cout<<"Enter two number::";
    cin>>a>>b;
    cout<<"HCF::"<<hcf_eff(a,b);
    return 0;
}