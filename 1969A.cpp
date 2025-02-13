#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int x,n,cnt=0;
        // cin>>n;
        // vector<int>v;
        // vector<int>v1;
        // for(int i=1;i<n+1;i++){
        //     cin>>x;
        //     v.push_back(x);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(cnt>2){
        //         break;
        //     }
        //     auto it=find(v1.begin(),v1.end(),v[i]);
        //     if(it!=v1.end()){
        //         v1.push_back(v[i]);
        //         cnt++;
        //     }
        //     if(find(v1.begin(),v1.end(),v[v[i]])==v1.end()){
        //         v1.push_back(v[v[i]+1]);
        //     }
        //     else{
        //         v1.erase(it);
        //     }
        // }
        // cout<<cnt<<endl;
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v) cin >> i;
        bool itt=true;
        for (int i = 0; i < n; ++i)
        {
            int fnd = i + 1;
            int bst = v[i];
            if (v[bst - 1] == fnd)
            {
                cout << 2 << endl;
                itt=false;
                break;
            }
        }
        if(itt) cout << 3 << endl;
    }
}
//{1,2,5,3,5}