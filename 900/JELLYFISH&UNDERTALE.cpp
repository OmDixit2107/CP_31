#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n, temp = 1;
        cin >> a >> b >> n;
        long long ans = b;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; ++i)
        {
            temp += v[i];
            if (temp > a)
            {
                temp = a;
            }
            ans += temp - 1;
            temp = 1;
        }
        cout << ans << endl;
    }
    return 0;
}