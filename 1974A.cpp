#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>abc;
    while (t--){
        int x,y,cnt=0;
        cin>>x>>y;
        while(x>0||y>0){
            if(x==0&&y!=0){
                cnt++;
                y=y-2;
            }
            else if(y==0&&x!=0){
                cnt++;
                x=x-15;
            }
            else{
                if(y>1){
                    cnt++;
                    x=x-7;
                    y=y-2;
                }
                else{
                    y--;
                    x=x-11;
                    cnt++;
                }
            }
        }
       abc.push_back(cnt);
    }
    for(auto i:abc){
        cout<<i<<endl;
    }
}