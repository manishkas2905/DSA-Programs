//HCF of two number using modulo function
//TC -> log(min(a,b))
#include<bits/stdc++.h>
using namespace std;
int hcf_mod(int a,int b)
{
    if(b==0)
        return a;
    return hcf_mod(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter two number::";
    cin>>a>>b;
    cout<<"HCF::"<<hcf_mod(a,b);
    return 0;
}