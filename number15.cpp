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
        int a[n], b[n];
        int one_in_a = 0, one_in_b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                one_in_a++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
                one_in_b++;
        }
        int num_of_diff_bit = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                num_of_diff_bit++;
        }
        int diff_of_one_in_ab = abs(one_in_a - one_in_b);
        if (diff_of_one_in_ab == num_of_diff_bit)
        {
            cout << diff_of_one_in_ab << endl;
        }
        else
        {
            cout << diff_of_one_in_ab + 1 << endl;
        }
        cout << endl;
    }

    return 0;
}