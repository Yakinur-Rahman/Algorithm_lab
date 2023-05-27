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
        int lp = 0, rp = n - 1;
        int b[n];
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                b[i] = a[rp];
                rp--;
            }
            else
            {
                b[i]=a[lp];
                lp++;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}