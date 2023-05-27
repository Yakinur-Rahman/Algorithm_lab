#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    while (cin >> n && n != 0)
    {
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
                cout << a[i] << " ";
            else
                cout << a[i];
        }
        cout << endl;
    }
}