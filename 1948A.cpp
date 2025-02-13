#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            while(n>0){
                if(n==2){
                    cout<<"MM";
                    n-=2;
                }
                else{
                    cout<<"AAB";
                    n-=2;
                }
            }
            cout<<endl;
        }
    }
}