#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool is=true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                cout<<"YES"<<endl;
                swap(s[i],s[i+1]);
                cout<<s<<endl;
                is=false;
                break;
            }
        }
        if(is) cout<<"NO"<<endl;
    }
}