#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t; 
	cin >> t;
	while(t--){
		long long n, a, b;
        cin >> n >> a >> b;
        if(b <= a){
            cout << (long long)n*a << endl; 
            continue;
        }
        long long i = (b - a);
        long long k = min(n, b);
        i = min(k, i);
 
        long long cost = (n- i)*a;
        // for(long long j = 1; j <= i; j++){
        //     cost += (b - j + 1);
        // }
        cost += (i * b) - (i * (i - 1) / 2);
        cout << cost << endl;
	}	
}