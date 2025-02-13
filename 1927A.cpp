#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n>>s;
        vector<int>a;
        for(int i=0;i<n;i++){
            if(s[i]=='B') a.push_back(i);
        }
        int ans=a[a.size()-1]-a[0]+1;
        cout<<ans<<endl;
    }
}