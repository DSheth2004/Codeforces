#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        bool one(false);
        int s(0);
        for(long i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%3==1){one=true;}
            s+=x;
            s%=3;
        }
        if(!one&&s%3==1){cout<<"2";}
        else if(s%3){cout<<"1";}
        else cout<<"0";
        cout<<endl;
    }
}