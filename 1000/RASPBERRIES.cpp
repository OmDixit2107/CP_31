#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, maxx = 0;
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
        // sort(v.begin(),v.end());
        if (k == 2)
        {
            bool twofound = false;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] % 2 == 0)
                {
                    twofound = true;
                    break;
                }
            }
            if (twofound)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (k == 3)
        {
            maxx = 0;
            bool threefound = false;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] % 3 == 0)
                {
                    threefound = true;
                    break;
                }
                maxx = max(maxx, v[i] % 3);
            }
            if (threefound)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 3 - maxx << endl;
            }
        }
        else if (k == 5)
        {
            bool fivefound = false;
            maxx = 0;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] % 5 == 0)
                {
                    fivefound = true;
                    break;
                }
                maxx = max(maxx, v[i] % 5);
            }
            if (fivefound)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 5 - maxx << endl;
            }
        }
        else
        {
            bool four_found = false;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] % 4 == 0)
                {
                    four_found = true;
                    break;
                }
            }
            int c = 0, maxx = 0;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] % 2 == 0)
                {
                    c++;
                }
                maxx = max(maxx, v[i] % 4);
            }
            if (four_found)
            {
                cout << 0 << endl;
            }
            else if (c >= 2)
            {
                cout << 0 << endl;
            }
            else if (c == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << min(4 - maxx, 2) << endl;
            }
        }
    }
    return 0;
}
