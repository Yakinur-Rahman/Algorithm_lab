#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    while (cin >> test && test != 0)
    {
        while (test--)
        {
            int r;
            cin >> r;
            int s[r];
            for (int i = 0; i < r; i++)
                cin >> s[i];
            sort(s, s + r);
            int m;
            m = r / 2;
            long long sum = 0;
            if (r % 2 != 0)
            {
                for (int i = 0; i < r; i++)
                {
                    sum += abs(s[i] - s[m]);
                }
                cout << sum << endl;
            }
            else if (r % 2 == 0)
            {
                int avg = (s[m] + s[m - 1]) / 2;
                for (int i = 0; i < r; i++)
                {
                    sum += abs(s[i] - avg);
                }
                cout << sum << endl;
            }
        }
    }
    return 0;
}