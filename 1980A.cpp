#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        map<char,int>v={{'A',0},{'B',0},{'C',0},{'D',0},{'E',0},{'F',0},{'G',0}};
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            v[a[i]]++;
        }
        int cnt=0;
        for(char i='A';i<'H';i++)
        {
            if(v[i]<m) cnt+=(m-v[i]);
        }
        cout<<cnt<<endl;
    }
}