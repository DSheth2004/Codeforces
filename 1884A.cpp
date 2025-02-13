#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]==a[n-1]) cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
            vector<char> s;
            for(int i=0;i<n;i++) s.push_back('R');
            s[1]='B';
            for(auto sr:s) cout<<sr;
            cout<<endl;
        }
    }
}