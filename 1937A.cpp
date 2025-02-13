#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,ans=1;
        cin>>n;
       while(2*ans<=n){
            ans*=2;
       }
       cout<<ans<<endl;
    }
}