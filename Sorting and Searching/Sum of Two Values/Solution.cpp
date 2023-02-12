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
    ll a, sum = 0, b;
    cin >> a >> b;
    ll *arr = new ll[a];
    map<int, int> fre;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        fre[arr[i]] = i + 1;
    }
    for (int i = 0; i < a; i++) {
        if (fre[b - arr[i]] && fre[b - arr[i]] != i + 1) {
            cout << i + 1 << " " << fre[b - arr[i]] << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
}
