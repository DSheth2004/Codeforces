#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,cnt=0;
        cin>>a>>b>>c;
        bool poss=true;
        cnt=cnt+a+(b/3);
        b=b-3*(b/3);
        if(b>0){
            if(c>=(3-b)){
                c=c-(3-b);
                cnt+=1;
            }
            else poss=false;
        }
        if(c>=3){
            cnt+=c/3;
            c-=3*(c/3);
        }
        if(c>=2){
            cnt+=c/2;
            c-=2*(c/2);
        }
        if(c>0) cnt+=c;
        if(poss) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
}