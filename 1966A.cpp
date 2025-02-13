#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
		cin >> n >> k;
		map<int, int> m;
		for(int i = 0, ai; i < n; ++i){
			cin >> ai;
			++m[ai];
		}
		int f = 0;
		for(auto i: m){
			if(i.second >= k){
				f = 1;
				break;
			}
		}
		if(f) cout << k - 1 << endl;
		else cout << n << endl;
    }
}