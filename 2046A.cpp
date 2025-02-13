#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(2, vector<int>(n));


        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int ans=0,mx=INT_MIN;
        for(int i=0;i<n;i++){
            ans+=max(v[0][i],v[1][i]);
            mx=max(mx,min(v[0][i],v[1][i]));
        }
        ans+=mx;
        cout<<ans<<endl;
    }
}