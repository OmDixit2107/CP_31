#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // cout << n << endl;
        if (n & 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i < 1000; ++i)
            {
                if (n % i != 0)
                {
                    cout << i - 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}