#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        // int ans=a[n/2],cnt=0;
        // int val=a[0];
        // while(val<=ans){
        //     int cnt1=(a.begin(),a.end(),ans);
        //     if(cnt1>=1){
        //         auto it=find(a.begin(),a.end(),ans);
        //         a.erase(it);
        //         cnt++;
        //     }
        //      sort(a.begin(),a.end());
        // }
        // int cnt1=(a.begin(),a.end(),ans),lowcnt=0,highcnt=0;
        // for(int i=0;i<n;i++){
        //     if(i<n/2){
        //         if(a[i]==ans){
        //             lowcnt++;
        //         }
        //     }
        //     else{
        //         if(a[i]==ans) highcnt++;
        //     }
        // }
        // if(lowcnt>0) cnt=lowcnt;

        // cout<<cnt<<endl;
        int id = ceil(n * 1.00 / 2);
		int v = a[id - 1];
		int ans = 0;
		for(int i = id - 1; i < n; ++i){
			if(a[i] == v) ++ans;
			else break;
		}
		cout << ans << endl;
    }
}