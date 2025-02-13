#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k;
        x=2*(n+n-2);
        if(k<=x){
            if(k&1) k++;
            cout<<k/2<<endl;
        }
        else cout<<x/2+(k-x)<<endl;
    }
}