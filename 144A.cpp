#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int mx=INT_MIN,mn=INT_MAX,mxi=-1,mni=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(mx<v[i]){
            mx=v[i];
            mxi=i;
        }
        if(mn>=v[i]){
            mn=v[i];
            mni=i;
        }
    }
    int ans=0;
    if(mni<mxi) cout<<abs(n-1-mni)+abs(mxi-0)-1<<endl;
    else cout<<abs(n-1-mni)+abs(mxi-0)<<endl;

}