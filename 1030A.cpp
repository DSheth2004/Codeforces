#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) flag=false;
    }
    if(!flag) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}