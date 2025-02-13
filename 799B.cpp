#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>price(n);
    vector<int>frnt(n);
    vector<int>bck(n);
    for(int i=0;i<n;i++) cin>>price[i];
    for(int i=0;i<n;i++) cin>>frnt[i];
    for(int i=0;i<n;i++) cin>>bck[i];
    int m;
    cin>>m;
    vector<int>buyers(m);
    for(int i=0;i<m;i++) cin>>buyers[i];
    map<pair<int,int>,multiset<int>>items;
    for(int i=0;i<n;i++){
        items[{frnt[i],bck[i]}].insert(price[i]);
    }
    for (int i = 0; i < m; i++) {
        int preference = buyers[i];
        int min_price = INT_MAX;
        pair<int, int> best_pair = {-1, -1};
        for (auto &p : items) {
            if (p.first.first == preference || p.first.second == preference) {
                if (!p.second.empty()) {
                    int lowest_price = *p.second.begin();
                    if (lowest_price < min_price) {
                        min_price = lowest_price;
                        best_pair = p.first;
                    }
                }
            }
        }
        if (min_price == INT_MAX) {
            cout << "-1 ";
        } else {
            cout << min_price << " ";
            items[best_pair].erase(items[best_pair].begin());
        }
    }
}