#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> xy;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        xy.push_back({x, y});
    }
    sort(xy.begin(), xy.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first; });
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (s > xy[i].first)
        {
            s += xy[i].second;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
    return 0;
}