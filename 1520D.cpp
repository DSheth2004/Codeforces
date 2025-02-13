#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        unordered_map<long long, long long> diff_count;
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            long long diff = v[i] - i;
            cnt += diff_count[diff];
            diff_count[diff]++;
        }
        cout << cnt << endl;
    }
    return 0;
}
