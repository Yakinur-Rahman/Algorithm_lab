#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> temp;
    int n;
    while (cin >> n && n != 0)
    {
        temp.push_back(n);
        sort(temp.begin(), temp.end());
        if (temp.size() % 2 != 0)
        {
            cout << temp[temp.size() / 2] << endl;
        }
        else
        {
            cout << (temp[temp.size() / 2] + temp[(temp.size() / 2) - 1]) / 2 << endl;
        }
    }
    return 0;
}