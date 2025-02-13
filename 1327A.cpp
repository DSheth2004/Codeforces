#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n,k;
    while(t--){
        cin>>n>>k;
        if(k*k > n){
            cout<<"NO"<<endl;
        }
        else if((n%2==1 && k%2==1) || (n%2==0 && k%2==0))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}