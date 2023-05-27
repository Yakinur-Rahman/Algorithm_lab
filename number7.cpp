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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        int mx1 = a[n - 1];
        int mx2 = a[n - 2];
        for (int i = 0; i < n; i++)
        {
            if (b[i] - mx1 == 0)
            {
                cout << b[i] - mx2 << " ";
            }
            else
                cout << b[i] - mx1 << " ";
        }
        cout << endl;
    }
}