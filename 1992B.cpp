#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, max1, cnt = 0, iter = 0, cnt_1, cnt_max1;
        cin >> n >> k;
        vector<long long int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        if (count(v.begin(), v.end(), 1) == k)
        {
            cout << count(v.begin(), v.end(), 1) - 1 << endl;
            continue;
        }
        max1 = *max_element(v.begin(), v.end());
        cnt_1 = count(v.begin(), v.end(), 1);
        cnt_max1 = count(v.begin(), v.end(), max1);
        for (int i = 0; i < k; i++)
        {
            if (v[i] != max1 && v[i] != 1)
            {
                cnt_1 = cnt_1 + (v[i] - 1);
                cnt = cnt + (v[i]);
            }
        }
        cnt += cnt_1;
        if (cnt_max1 > 1)
            cnt += (cnt_max1 - 1) * (2 * max1 - 1);
        cout << cnt << endl;
    }
}