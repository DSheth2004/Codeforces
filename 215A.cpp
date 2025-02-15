#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    int maxRatio = 0, count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) { // Check if the gear ratio is an integer
                int ratio = b[j] / a[i];
                if (ratio > maxRatio) {
                    maxRatio = ratio;
                    count = 1;
                } else if (ratio == maxRatio) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
