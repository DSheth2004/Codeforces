#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m, '.')); // Initialize grid with '.'

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // Fill full row on even rows (0-based index)
            for (int j = 0; j < m; j++)
                a[i][j] = '#';
        } else {
            if (i % 4 == 1)  // On rows 1, 5, 9... fill only the last column
                a[i][m - 1] = '#';
            else             // On rows 3, 7, 11... fill only the first column
                a[i][0] = '#';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << endl;
    }

    return 0;
}
