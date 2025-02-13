#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n1=(s[0]-'0')*10+(s[1]-'0');
        int n2=(s[3]-'0')*10+(s[4]-'0');
        bool pren1=false,pren2=false,am=true;

        if(n1==0&&n2==0){
            n1=12;
            n2=0;
            pren2=true;
            am=true;
        }else{
            if(n2<10)
            {
                pren2=true;
            }
            if(n1>=12){
                am=false;
                if(n1>12) n1-=12;
            }
            else{
                if(n1==0){
                  n1=12;
                }
            }
            if(n1==12&&n2==0) am=false;
            if(n1<10){
                pren1=true;
            }
        }

        if(pren1) cout<<"0"<<n1;
        else cout<<n1;
        cout<<":";
        if(pren2) cout<<"0"<<n2;
        else cout<<n2;
        if(am) cout<<" AM"<<endl;
        else cout<<" PM"<<endl;
    }
}