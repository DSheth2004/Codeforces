#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int x,y,gcd1,max1=0,maxy=1;
        cin>>x;
        for(int i=1;i<x;i++){
            y=i;
            for(int j=1;j<=y;j++){
                if(y%j==0&&x%j==0){
                    gcd1=j;
                }
            }
            if(max1<=(gcd1+y)){
                max1=(gcd1+y);
                maxy=y;
            }
        }
        cout<<maxy<<endl;
    }

}