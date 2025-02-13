#include <bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if(b == 1){cout<<"NO"<<endl; continue;}
        cout<<"YES"<<endl<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
    }

}