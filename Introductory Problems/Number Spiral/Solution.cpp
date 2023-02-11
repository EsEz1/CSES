#include<bits/stdc++.h>
 
#define ll long long
using namespace std;
 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
ll prime(ll x) {
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (ll i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}
 
ll gcd(ll a, ll b) {
    if (!b)
        return a;
    return gcd(b, a % b);
}
 
int main() {
    fast();
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a < b) {
            if (b & 1) {
                cout << (b * b) - a + 1 << "\n";
            } else {
                cout << (b - 1) * (b - 1) + a << "\n";
            }
        } else {
            if (a & 1) {
                cout << (a - 1) * (a - 1) + b << "\n";
            } else {
                cout << (a * a) - b + 1 << "\n";
            }
        }
    }
}