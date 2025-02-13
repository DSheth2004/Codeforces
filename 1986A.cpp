#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double x1,x2,x3,fa=10,a;
        cin>>x1>>x2>>x3;
        for(double i=1;i<=10;i++)
        {
            a=abs(i-x1)+abs(i-x2)+abs(i-x3);
            if(a<fa) fa=a;
        }
        cout<<fa<<endl;
    }
}