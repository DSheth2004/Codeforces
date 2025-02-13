#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n,m,sx,sy,d;
    while (t--) {
        cin >> n >> m >> sx >> sy >> d;
        if((sy - d <= 1 && sx - d <= 1) || (sx + d >= n && sy + d >= m)) cout << "-1"<<endl;
        else if((sx - d <= 1 && sx + d >= n) || (sy - d <= 1 && sy + d >= m)) cout << "-1"<<endl;
        else cout << n - 1 + m - 1 <<endl;
    }
    return 0;
}