#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a[t]++;
        }
        vector<pair<int, int>> a2(a.begin(), a.end());
        sort(a2.begin(), a2.end(), [](const pair<int, int> &b, const pair<int, int> &c)
             { return b.second > c.second; });
        if (a2[0].second >= 3)
        {
            cout << a2[0].first << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}