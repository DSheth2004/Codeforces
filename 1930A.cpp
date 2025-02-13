#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(2*n);
        for(int i=0;i<2*n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<2*n;i+=2){
            ans+=min(v[i],v[i+1]);
        }
        cout<<ans<<endl;
    }
}