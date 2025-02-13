#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i=0, n,x;
    cin>>n;
    set<long long>s;
    for(i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    i=1;
    while(1){
        if(s.find(i)==s.end()) break;
        i++;
    }
    cout<<i<<endl;
}