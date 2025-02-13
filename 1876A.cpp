#include <bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin>>t;
    while(t--){
        long long n, r;
        cin>>n>>r;


        vector<pair<long long, long long> > v(n);
        for(long long p = 0; p < n; p++){scanf("%lld", &v[p].second);}
        for(long long p = 0; p < n; p++){scanf("%lld", &v[p].first);}
        sort(v.begin(), v.end());

        long long rem(n - 1), total(r);
        for(long long p = 0; p < n; p++){
            if(v[p].first >= r){break;}
            long long cnt = (rem < v[p].second) ? rem : v[p].second;
            total += cnt * v[p].first;
            rem -= cnt;
        }

        total += r * rem;
        cout<<total<<endl;
    }

}