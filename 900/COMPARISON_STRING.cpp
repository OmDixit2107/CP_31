#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxL = 0, maxG = 0, c = 0, g = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '<')
            {
                c++;
                maxL = max(maxL, c);
            }
            else
                c = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '>')
            {
                g++;
                maxG = max(maxG, g);
            }
            else
                g = 0;
        }
        // cout << maxL << " " << maxG << endl;
        cout << max(maxL, maxG) + 1 << endl;
    }
    return 0;
}

/*
><>>><<>
214321321
*/