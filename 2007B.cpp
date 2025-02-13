#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long x,a=INT_MIN;;
        for(int i=0;i<n;i++){
            cin>>x;
            a=max(x,a);
        }
        while(m--){
            int l,r;
            char c;
            cin>>c>>l>>r;
            if(l<=a&&a<=r){
                if(c=='+') a++;
                else a--;
            }
            cout<<a<<" ";
        }
        cout<<endl;
    }
}