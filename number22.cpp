#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    map<int, int> bar;
    for (int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        bar[t]++;
    }
    vector<pair<int, int>> bar2(bar.begin(), bar.end()); /// map er upor sort direct use korte parbo na;
    sort(bar2.begin(), bar2.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    cout << bar2[0].second << " " << bar2.size() << endl;
    return 0;
}