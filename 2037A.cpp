#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        multiset<int>s;
        int x,ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(s.find(x)==s.end()){
                s.insert(x);
            }
            else{
                ans++;
                s.erase(x);
            }
        }
        cout<<ans<<endl;
    }
}