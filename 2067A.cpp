#include <iostream>
using namespace std;

// Function to compute the sum of the digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int x, y;
        cin >> x >> y; // Read x and y for each test case
        bool flag=false;
        if(y==x+1) flag=true;
        else if(x>y&&(x+1-y)%9==0){
            flag=true;
        }
        else flag=false;
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}