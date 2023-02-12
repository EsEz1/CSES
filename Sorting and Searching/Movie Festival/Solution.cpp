#include"bits/stdc++.h"
 
#define ll long long
using namespace std;
const long double PI = acos(-1);
 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
}
 
 
int main() {
    fast();
    int t, result = 0, total = 0;
    cin >> t;
    vector<pair<int, int>> q;
    while (t--) {
        int x, y;
        cin >> x >> y;
        q.push_back({y, x});
    }
    sort(q.begin(), q.end());
    for (auto &i: q) {
        if (i.second >= result) {
            result = i.first, total++;
        }
    }
    cout << total;
}
