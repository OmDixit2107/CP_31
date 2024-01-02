#include <bits/stdc++.h>
using namespace std;

bool pairCompare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first == b.first && a.second == b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        vector<pair<int, int>> vk, vq;
        vk.push_back({xk + a, yk + b});
        vk.push_back({xk + a, yk - b});
        vk.push_back({xk - a, yk + b});
        vk.push_back({xk - a, yk - b});
        vk.push_back({xk + b, yk + a});
        vk.push_back({xk + b, yk - a});
        vk.push_back({xk - b, yk + a});
        vk.push_back({xk - b, yk - a});

        vq.push_back({xq + a, yq + b});
        vq.push_back({xq + a, yq - b});
        vq.push_back({xq - a, yq + b});
        vq.push_back({xq - a, yq - b});
        vq.push_back({xq + b, yq + a});
        vq.push_back({xq + b, yq - a});
        vq.push_back({xq - b, yq + a});
        vq.push_back({xq - b, yq - a});

        sort(vk.begin(), vk.end());
        sort(vq.begin(), vq.end());

        vq.erase(unique(vq.begin(), vq.end()), vq.end());
        vk.erase(unique(vk.begin(), vk.end()), vk.end());
        // for (int i = 0; i < vk.size(); ++i)
        // {
        // 	cout << vk[i].first << " " << vk[i].second << endl;
        // }
        int ans = 0;
        for (int i = 0; i < vq.size(); ++i)
        {
            for (int j = 0; j < vk.size(); ++j)
            {
                if (vk[i] == vq[j])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}