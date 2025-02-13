#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[5][5];
    int c=0,r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]){
                c=j;r=i;
            }
        }
    }
    r=abs(r-2);
    c=abs(c-2);
    cout<<r+c<<endl;
}