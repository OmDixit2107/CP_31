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
        std::vector<char> v;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '1')
            {
                cnt0--;
                if (cnt0 < 0)
                {
                    break;
                }
                v.push_back('0');
            }
            else if (s[i] == '0')
            {
                cnt1--;
                if (cnt1 < 0)
                {
                    break;
                }
                v.push_back('1');
            }
        }
        // for (int i = 0; i < v.size(); ++i)
        // {
        // 	cout <<v[i];
        // }
        // cout <<endl;
        cout << s.size() - v.size() << endl;
    }
    return 0;
}
