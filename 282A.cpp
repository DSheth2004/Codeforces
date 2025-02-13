#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    string v;
    while(n--){
        cin>>v;
        if(v=="++X"||v=="X++") x++;
        else x--;
        v.clear();
    }
    cout<<x<<endl;
}