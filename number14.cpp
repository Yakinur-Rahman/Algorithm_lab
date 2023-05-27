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
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int min_diff = a[1] - a[0];
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < min_diff)
            {
                min_diff = a[i + 1] - a[i];
            }
        }
        cout << min_diff << endl;
    }
}