#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if((x1<y1&&x2<y2)||(x1>y1&&x2>y2)) cout<<"Yes\n";
        else cout<<"No\n";
    }
}