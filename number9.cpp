#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    // int c[n + m];
    // copy(a, a + n, c);
    // copy(b, b + m, c + n);
    sort(a,a+n,greater<int>());
    sort(b,b+m,greater<int>());
    // sort(c, c + n + m, greater<int>());
    // for(int i=0;i<n;i++)
    // {

    //     for(int j=0;j<m;j++)
    //     {
    //         for(int k=0;k<n+m;k++)
    //         {
    //             if(a[i]+b[j]>c[k])
    //             {
    //                 cout<<a[i]<<" "<<b[j]<<endl;
    //             }
    //         }
    //     }
    // }
    cout << a[0] << " " << b[0] << endl;

    return 0;
}