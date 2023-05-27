#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int l = str.size();
    // cout<<l<<endl;
    for (int i = l / 2; i < l; i++)
    {
        if (i != l - 1)
            cout << str[i] << "+";
        else
            cout << str[i];
    }
    cout << endl;
}