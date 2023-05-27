#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;
    cin >> N >> D;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a, a + N, greater<int>());
    int cnt = 0, flag = 0;
    // for(auto i:a)
    // cout<<"$"<<i<<endl;
    long long sum = N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if ((a[i] * j) > D)
            {
                sum -= j;
                if (sum < 0)
                {
                    flag = 1;
                    break;
                }
                cnt++;
                break;
            }
        }
        if (flag)
            break;
    }
    cout << cnt << endl;
    return 0;
}