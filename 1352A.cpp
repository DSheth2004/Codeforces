#include <bits/stdc++.h>
using namespace std;
void dig(int n){
    if(n==0) return;
    int power=1;
    vector<int>res;
    while(n!=0){
        int x=n%10;
        if(x!=0) res.push_back(x*power);
        n=n/10;
        power*=10;
    }
    cout<<res.size()<<endl;
    for(int i:res) cout<<i<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dig(n);
        cout<<endl;
    }
}