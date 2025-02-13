#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<int,int>a;
    while(t--){
        int n,x,cnt=0,j=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        for(int i=1;i<=100;i++){
            if(a[i]>=3){
                cnt=cnt+a[i]/3;
            }
            j+=a[i];
            if(j>=n) break;
        }
        cout<<cnt<<endl;
        a.clear();
    }
}