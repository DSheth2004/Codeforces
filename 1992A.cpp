#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,min1;
        cin>>a>>b>>c;
        for(int i=1;i<=5;i++){
            min1=min(a,min(b,c));
            if(min1==a) a++;
            else if(min1==b) b++;
            else c++;
        }
        cout<<(a*b*c)<<endl;
    }
}