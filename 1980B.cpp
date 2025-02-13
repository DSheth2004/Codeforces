#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n,f,k,cnt1=0,cnt2=0,fav_no;
        cin>>n>>f>>k;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(i==f) fav_no=x;
        }
        for(int i=0;i<n;i++){
            if(v[i]==fav_no) cnt1++;
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<k;i++){
            if(v[i]==fav_no) cnt2++;
        }
        if(cnt1==cnt2) cout<<"YES"<<endl;
        else if(cnt2>0) cout<<"MAYBE"<<endl;
        else cout<<"NO"<<endl;
        v.clear();
    }
}