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
    string x;
    cin >> x;
    ll counter = 1, total = 0, sz = x.size() - 1;
    for (int i = 0; i < sz; i++) {
        if (x[i] == x[i + 1]) {
            counter++;
        } else {
            total = max(total, counter);
            counter = 1;
        }
    }
    total = max(total, counter);
    cout << total;
}