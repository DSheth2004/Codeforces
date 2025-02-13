#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<0) x=0-x;
            sum+=x;
        }
        cout<<sum<<endl;
    }
}