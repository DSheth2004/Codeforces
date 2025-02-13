#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        int ans = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            int p = v[i] + v[n - 1];
            ans = max(ans, p);
        }
        cout << ans << endl;
    }
}