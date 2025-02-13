#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++){
            cin>>x;
            v[x]++;
        }
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(v[i]==1){
                flag=false;
                break;
            }
            v[i+1]+=max(0,v[i]-2);
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // cout<<(flag)?"YES":"NO"<<endl;
    }
}