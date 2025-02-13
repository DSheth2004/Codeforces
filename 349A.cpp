#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c_25=0,c_50=0;
    cin>>n;
    vector<long long>a(n);
    bool flag=true;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==25) c_25++;
        else if(a[i]==50){
            if(c_25>0){
                c_25--;
                c_50++;
            }
            else flag=false;
        }
        else{
            if(c_50>0&&c_25>0){
                c_25--;
                c_50--;
            }
            else if(c_25>2){
                c_25-=3;
            }
            else flag=false;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}