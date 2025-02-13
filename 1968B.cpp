#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        string a, b;
        cin >> n >> m >> a >> b;
        for (int i = 0, j = 0; i < n && j < m; j++)
        {
            if (a[i] == b[j])
            {
                ans++;
                i++;
            }
        }
        cout << ans << endl;
    }
}