#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,q;
        cin>>k>>q;
        vector<int>a(k),n(q);
        for(int i=0;i<k;i++)cin>>a[i];
        for(int i=0;i<q;i++)cin>>n[i];
        for(int i=0;i<n.size();i++){
            cout<<min(a[0]-1,n[i])<<" ";
        }
        cout<<endl;
    }
}