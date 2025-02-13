#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k,sum=0,ans=0;
        cin>>n>>k;
        priority_queue<long long,vector<long long>>q;
        while(n--){
            long long x;
            cin>>x;
            q.push(x);
            sum+=x;
        }
        if(sum<k){
            cout<<k-sum<<endl;
            k=0;
        }
        while(k>0){
            long long x=q.top();
            q.pop();
            if(k==x){
                cout<<0<<endl;
                break;
            }
            else if(k>x){
                k-=x;
            }
            else{
                cout<<k<<endl;
                break;
            }
        }
    }
}