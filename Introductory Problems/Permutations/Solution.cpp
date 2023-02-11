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
    int x;
    cin >> x;
    if (x == 3 || x == 2) {
        cout << "NO SOLUTION\n";
    } else {
        for (int i = 2; i <= x; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= x; i += 2) {
            cout << i << " ";
        }
    }
}