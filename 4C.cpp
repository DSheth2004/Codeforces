#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<string,int>m;
    while(t--) {
        string s;
        cin >> s;
        if(m.find(s) != m.end()) {
            cout<<s<<m[s]++<<endl;
        }
        else{
            cout<<"OK"<<endl;
            m[s]=1;
        }
    }
    return 0;
}
