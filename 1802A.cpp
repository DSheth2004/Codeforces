#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],max[n],min[n];
        int neg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0)neg++;
        }
        int no;
        for(int i=0;i<n-neg;i++){
            max[i]=i+1;
            no=max[i];
        }

        for(int i=n-neg;i<n;i++){
            max[i]=--no;
        }
        int i=0;
        int val=1;
        while(neg--){
            min[i++]=1;
            min[i++]=0;
        }
        while(i<n){
            min[i++]=val++;
        }
        for(int k=0;k<n;k++){
            cout<<max[k]<<" ";
        }
        cout<<endl;
        for(int k=0;k<n;k++){
            cout<<min[k]<<" ";
        }
        cout<<endl;
    }
}