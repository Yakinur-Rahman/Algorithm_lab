// 3 s-3 2  1 4
// 2 s-2 1 3 4
// 1 s - 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    while (cin >> test && test != 0)
    {
        while (test--)
        {

            int t;
            cin >> t;
            int a[t];
            for (int i = 0; i < t; i++)
            {
                cin >> a[i];
            }
            int flag = 1, cnt = 0;
            while (flag)
            {
                int g = 0;
                for (int i = 0; i < t - 1; i++)
                {
                    if (a[i + 1] < a[i])
                    {
                        swap(a[i + 1], a[i]);
                        cnt++;
                        g = 1;
                    }
                }
                if (!g)
                    flag = 0;
            }
            cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
        }
    }
}
