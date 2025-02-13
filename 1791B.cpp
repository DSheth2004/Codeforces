#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0;
        cin>>n;
        string s(n,' ');
        bool flag=false;
        for(int i=0;i<n;i++) cin>>s[i];
        for(char c:s){
            if(c=='U') y++;
            else if(c=='D') y--;
            else if(c=='L') x--;
            else if(c=='R')x++;
            if(x==1&&y==1){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}