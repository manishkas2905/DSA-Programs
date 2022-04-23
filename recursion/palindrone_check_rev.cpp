//checking whether a string is palindrone or not
#include<bits/stdc++.h>
using namespace std;
bool pal(string &str, int start,int end)
{
    if(start>=end)
        return true;
    return (str[start]==str[end] && pal(str,start+1, end-1));
}
int main()
{
    string str;
    cout<<"Enter the string::";
    cin>>str;
    int n=str.length();
    if(pal(str,0,n-1))
        cout<<"Palindrone";
    else
        cout<<"Not Palindrone";
    return 0;
}