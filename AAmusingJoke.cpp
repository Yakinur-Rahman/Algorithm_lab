#include <bits/stdc++.h>
using namespace std;

int main()
{

    string st[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> st[i];
        sort(st[i].begin(), st[i].end());
    }
    st[0] += st[1];
    sort(st[0].begin(), st[0].end());
    if (st[0]==st[2])
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}