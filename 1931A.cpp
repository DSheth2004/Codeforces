#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        bool f=true;
        for(int i=1;i<=26;i++){
            if(!f) break;
            for(int j=1;j<=26;j++){
                if(!f) break;
                if(n-i-j<=26){
                    cout<<char(i+'a'-1)<<char(j+'a'-1)<<char(n-i-j+'a'-1)<<endl;
                    f=false;
                    break;
                }
            }
        }

    }
}