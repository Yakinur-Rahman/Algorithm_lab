#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double max_diff=-1;
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]>max_diff)
         max_diff = a[i+1]-a[i];
    }
    max_diff=max_diff/2.0;
    if(a[0]>max_diff)
        max_diff=a[0];
    if(l-a[n-1]>max_diff)
        max_diff = l-a[n-1];
    
    cout<<setprecision(9)<<max_diff<<endl;
    return 0;
}