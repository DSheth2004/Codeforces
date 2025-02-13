#include <bits/stdc++.h>
using namespace std;

int main(){
    // Number of test cases
    long long t;
    cin>>t;
    while(t--){
        // Inputs n as size of array and p as cost for each person
        long long n, r;
        cin>>n>>r;

        // Vector of pair to find which pair should be taken first
        // As ideally the pair with shortest b[i] value will be taken
        // first for optimal solution
        vector<pair<long long, long long> > v(n);
        for(long long p = 0; p < n; p++) cin>>v[p].second;
        for(long long p = 0; p < n; p++) cin>>v[p].first;
        sort(v.begin(), v.end());
        // rem to find number of elements reamining after the logic
        // and total being the answer to find with initial value as r
        long long rem(n - 1), total(r);
        for(long long p = 0; p < n; p++){
            // If the cost is greater than r than we must use r
            if(v[p].first >= r){break;}
            // cnt to find number of neighbours lightened and to find cost
            long long cnt = (rem < v[p].second) ? rem : v[p].second;
            total += cnt * v[p].first;
            rem -= cnt;
        }

        total += r * rem;
        cout<<total<<endl;
    }

}