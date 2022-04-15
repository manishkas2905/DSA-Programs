//making power set using bitwise operator
//TC ->
#include<bits/stdc++.h>
using namespace std;
void power_set(string str)
{
    int n= str.length();
    int powersize = pow(2,n);
    for(int c=0; c<powersize; c++)
    {
        for(int j=0;j<n;j++)
        {
            if((c&(1<<j))!=0)
                cout<<str[j];
        }
        cout<<endl;
    }
}
int main()
{
    string str;
    cout<<"Enter the string::";
    cin>>str;
    power_set(str);
    return 0;
}