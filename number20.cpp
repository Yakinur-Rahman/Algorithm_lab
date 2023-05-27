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
        string str, str1;
        cin >> str;
        str1 = str;

        sort(str.begin(), str.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != str1[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}