#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<char>s(n);
        vector<char>r;
        map<char,char>m;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(find(r.begin(),r.end(),s[i])==r.end()) r.push_back(s[i]);
        }
        sort(r.begin(),r.end());
        for(int i=0;i<r.size();i++){
            m[r[i]] = r[r.size()-i-1];
        }
        for(int i=0;i<n;i++){
            s[i]=m[s[i]];
            cout<<s[i];
        }
        cout<<endl;
    }
}