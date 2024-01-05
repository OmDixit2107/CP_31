#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        // for (int i = 0; i < n; ++i)
        // {
        // 	cout << v[i] << " ";
        // }
        // int ans=1;
        map<int, int> hashMAP;
        for (int i = 0; i < n - 1; ++i)
        {
            hashMAP[i] = v[i + 1] - v[i];
        }
        // for (int i = 0; i < n-1; ++i)
        // {
        // 	cout << hashMAP[i] << " ";
        // }
        // cout << endl;
        int maxLen = 0, temp = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (hashMAP[i] <= k)
            {
                temp++;
                maxLen = max(maxLen, temp);
            }
            else
            {
                temp = 0;
            }
        }
        maxLen += 1;
        cout << n - maxLen << endl;
    }
    return 0;
}