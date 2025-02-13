#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long m = 2 * (n / 7) + (n % 7 == 6);
    long M = 2 * (n / 7) + (n % 7 > 0) + (n % 7 > 1);
    cout<<m<<" "<<M<<endl;
}