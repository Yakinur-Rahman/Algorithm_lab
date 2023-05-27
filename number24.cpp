#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, greater<int>());
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        t += a[i];
        sum -= a[i];
        if (t > sum)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}