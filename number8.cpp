#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        int cnt = 0, t = 1;
        for (int i = 0; i < n; i++)
        {
            // cout<<"**"<<t;
            if (a[i] * t >= x)
            {
                cnt++;
                t = 1;
                continue;
            }
            t++;
        }

        cout << cnt << endl;
    }
    return 0;
}