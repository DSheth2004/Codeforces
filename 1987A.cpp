#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a = 0;
        cin >> n >> k;
        if (n == k)
        {
            a = n * (k - 1) + 1;
        }
        else
        {
            while (n > 0)
            {
                if (n == 1)
                {
                    a++;
                    break;
                }
                for (int i = 0; i < k; i++)
                {
                    a++;
                }
                n--;
            }
        }
        cout << a << endl;
    }
}