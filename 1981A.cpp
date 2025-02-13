#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int l, r;
        cin >> l >> r;

        // Starting with the maximum value x = r
        int max_x = r;
        int score = 0;

        // Count the number of divisions by 2 until x becomes 1
        while (max_x > 1) {
            max_x /= 2;
            score += 1;
        }

        results.push_back(score);
    }

    // Output results for each test case
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
