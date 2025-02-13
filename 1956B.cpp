#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n;
        map<int,int>a;
        for(int i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]>=2){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}