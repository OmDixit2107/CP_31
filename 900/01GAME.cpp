#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int zeroc = 0, onec = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '1')
            {
                onec++;
            }
            else
            {
                zeroc++;
            }
        }
        int fin = min(zeroc, onec);
        if (fin % 2 != 0)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }

    return 0;
}