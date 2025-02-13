#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<long long>v;
    while(t--){
        int n;
        cin>>n;
        long long x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<(*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end()))<<endl;
        v.clear();
    }
}