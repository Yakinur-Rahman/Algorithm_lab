#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long suml = 0, sumr = 0;
    for (int i = 0; i < floor((double)n / 2.); i++)
    {
        suml += a[i];
    }
    for (int i = floor((double)n / 2.); i < n; i++)
    {
        sumr += a[i];
    }
    cout << (suml * suml) + (sumr * sumr) << endl;
    return 0;
}