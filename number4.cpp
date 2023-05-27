#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        int cnt=0;
        long long sum=0;

        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(((double)sum/(double)(i+1))<(double)x){
                break;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}