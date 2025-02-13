#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canBeSorted(vector<int> &a) {
    int n = a.size();
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    for (int i = 0; i < n; ++i) {
        if (a == sorted_a) {
            return true;
        }
        // Rotate the array by moving the first element to the end
        rotate(a.begin(), a.begin() + 1, a.end());
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canBeSorted(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
