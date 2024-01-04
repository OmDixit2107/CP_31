#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> b;
        }
        if (n % 2 != 0)
        {
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
    }
    return 0;
}