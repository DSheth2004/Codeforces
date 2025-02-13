#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum,max_sum=0,optimal_value;
        cin>>n;
        for(int i=2;i<=n;i++){
            sum=0;
            for(int j=1;j*i<=n;j++){
                sum+=i*j;
            }
            if(max_sum<=sum){
                max_sum=sum;
                optimal_value=i;
            }
        }
        cout<<optimal_value<<endl;
    }
}