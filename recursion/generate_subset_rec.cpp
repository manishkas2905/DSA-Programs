//generating subset using recursion
#include<bits/stdc++.h>
using namespace std;
void gen_sub(string str, string curr="", int i=0)
{
    if(i==str.length())
    {
        cout<<curr<<" ";
        return;
    }
    gen_sub(str, curr, i+1);
    gen_sub(str, curr+str[i],i+1);
}
int main()
{
    string str;
    cout<<"Enter the string::";
    cin>>str;
    gen_sub(str);
    return 0;
}