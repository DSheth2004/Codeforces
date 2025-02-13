#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    double minDistance=INT_MAX;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        minDistance=min(minDistance,((double)(sqrt((x-a)*(x-a)+(y-b)*(y-b))))/z);
    }
    cout << fixed << setprecision(20) << minDistance << endl;
}