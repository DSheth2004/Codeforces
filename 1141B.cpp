#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m1 = 0, l = 0;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];

    // Find the longest consecutive 1's in the array
    for(long long i = 0; i < n; i++) {
        if(a[i] == 1) l++;
        else l = 0;
        m1 = max(m1, l);
    }

    // Check if the array has 1's wrapping around from start to end
    if(a[0] == 1 && a[n - 1] == 1) {
        // Count the consecutive 1's from the start
        long long start = 0;
        while(start < n && a[start] == 1) start++;

        // Count the consecutive 1's from the end
        long long end = n - 1;
        while(end >= 0 && a[end] == 1) end--;

        // Combine the start and end sequences of 1's
        m1 = max(m1, start + (n - 1 - end));
    }

    cout << m1 << endl;
}
