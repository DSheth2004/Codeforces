#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n1;
        cin>>n1;
        bool flag=true;
        vector<int>v(n1+1,0);
        int x;
        for(int i=1;i<=n1;i++){
            cin>>x;
            v[x]=1;
            if(i==1) continue;
            if(x==n1&&v[n1-1]==0){
                flag=false;
                // break;
            }
            if(v[x-1]==0&&v[x+1]==0) {
                flag=false;
                // break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}