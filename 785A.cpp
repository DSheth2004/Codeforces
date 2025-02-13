#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    unordered_map<string,int>m={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron" ,20}};
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        ans+=m[s];
    }
    cout<<ans<<endl;
}