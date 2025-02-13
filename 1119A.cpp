#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> c(n);
    for(long long i = 0; i < n; i++) cin >> c[i];

    // Finding the first mismatch from the left
    long long left_dist = 0;
    for(long long i = 0; i < n; i++) {
        if(c[i] != c[n - 1]) {
            left_dist = n - 1 - i;
            break;
        }
    }

    // Finding the first mismatch from the right
    long long right_dist = 0;
    for(long long i = n - 1; i >= 0; i--) {
        if(c[i] != c[0]) {
            right_dist = i;
            break;
        }
    }

    // Output the maximum distance
    cout << max(left_dist, right_dist) << endl;
}
