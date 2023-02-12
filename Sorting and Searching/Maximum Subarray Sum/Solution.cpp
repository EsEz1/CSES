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
    ll a, sum = 0, best = LONG_LONG_MIN;
    cin >> a;
    ll *arr = new ll[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++) {
        sum = fmax(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
