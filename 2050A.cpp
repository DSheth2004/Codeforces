#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        vector<int>c;
        for(int i=0;i<n;i++){
            cin>>v[i];
            c.push_back(v[i].size());
        }
        int ans=0;
        for(auto it:c){
            if(m>=it){
                m-=it;
                ans++;
            }
            else break;
        }
        cout<<ans<<endl;
    }
}