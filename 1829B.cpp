#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,maxlen,len;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        len=0;maxlen=0;
        for(int i:v){
            if(i==1) len=0;
            else len++;
            maxlen=max(maxlen,len);
        }
        cout<<maxlen<<endl;
    }
}