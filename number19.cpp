#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] < s[i])
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 2 << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
    return 0;
}