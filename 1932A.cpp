#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,max1=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='@') max1++;
            if(i<n-2&&s[i+1]=='*'&&s[i+2]=='*') break;
        }
        cout<<max1<<endl;
    }
}