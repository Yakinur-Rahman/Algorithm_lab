#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int barrel[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> barrel[i];
        }

        sort(barrel, barrel + n, greater<int>());
        if (k == 0)
            cout << abs(barrel[n - 1] - barrel[0]) << endl;
        else
        {
            sum += barrel[0];
            for (int i = 1; i <= k; i++)
            {
                sum += barrel[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}