#include <bits/stdc++.h>
using namespace std;
int main()
{
    ///////////
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mini=max(a[0],a[1]);
        for(int i=1;i<n-1;i++){
            mini=min(mini,max(a[i],a[i+1]));
        }
        cout<<mini-1<<endl;
    }
}