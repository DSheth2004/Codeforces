#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n>>k;
    vector<int>v(n);
    for(i=0;i<n;i++) cin>>v[i];
    int x=v[k-1];
    for(i=0;i<n;i++){
        if(v[i]<x||v[i]<=0) break;
    }
    cout<<i<<endl;
}