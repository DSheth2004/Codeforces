#include <bits/stdc++.h>
using namespace std;

vector<long long int>a;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int x;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long int max1=a[n-1],max2=a[n-2],min1=a[0],min2=a[1];
        long long ans=abs(max1-min1)+abs(max2-min2)+abs(min1-max2)+abs(min2-max1);
        cout<<ans<<endl;
        a.clear();
    }
}