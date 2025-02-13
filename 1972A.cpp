#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,J=0;
        cin>>n;
        vector<long long int>a(n);
        vector<long long int>b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int i = 0, j = 0, cnt = 0;
		while(j < n){
			if(a[i] > b[j]){
				++j;
				++cnt;
			}else{
				++i;
				++j;
			}
		}

        cout<<cnt<<endl;
    }
}