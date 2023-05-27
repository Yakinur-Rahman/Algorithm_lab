#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        cout<<str[n-1]-'a'+1<<endl;
    }
    return 0;
}