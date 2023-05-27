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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            int flag = 0;
            sort(a, a + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i + 1] - a[i] <= 1)
                    continue;
                else
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                cout << "YES" << endl;
        }
    }
    return 0;
}