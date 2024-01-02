#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> arr(26);
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0; i < n; ++i)
        {
            arr[s[i] - 'a']++;
        }

        int odd_count = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (arr[i] % 2 != 0)
            {
                odd_count++;
            }
        }
        if (odd_count > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}