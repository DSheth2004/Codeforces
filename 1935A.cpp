#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        string s;
        cin>>n>>s;
        string rev(s);
        reverse(rev.begin(),rev.end());
        string a(s),b(rev+s);
        cout<<(a<b?a:b)<<endl;
    }
}