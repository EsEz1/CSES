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
 
ll fact(ll x) {
    if (x < 2)
        return x;
    return x * fact(x - 1);
}
 
int main() {
    fast();
    ll a, b, c;
    cin >> a >> b >> c;
    ll *arr = new ll[a];
    ll *arr1 = new ll[b];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    for (int i = 0; i < b; i++)
        cin >> arr1[i];
    sort(arr, arr + a);
    sort(arr1, arr1 + b);
    ll start = 0, counter = 0;
    ll end = 0;
    while (start < a && end < b) {
        if (abs(arr[start] - arr1[end]) <= c) {
            counter++;
            start++;
            end++;
        } else {
            if (arr[start] - arr1[end] > c) {
                end++;
            } else {
                start++;
            }
        }
    }
    cout << counter << "\n";
}
