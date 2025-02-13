#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,r=0;
        cin>>n;
        vector<long long>v;
        bool flag=true;
        long long sum=0;
        for(long int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
            v.push_back(x);
        }
        sum/=n;
        for(int i=0;i<n;i++){
            if(r+v[i]<sum){
                flag=false;
                break;
            }
            r=v[i]+r-sum;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}