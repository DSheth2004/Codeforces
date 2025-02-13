#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k,ans=0;
        cin>>n>>m>>k;
        vector<int>b(n),c(m);
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<m;i++) cin>>c[i];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((b[j]+c[i])<=k) ans++;
            }
        }
        cout<<ans<<endl;
    }
}