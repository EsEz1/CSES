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
    int a, b;
    cin >> a >> b;
    int *arr = new int[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    sort(arr, arr + a);
    int start = 0;
    int end = a - 1;
    int result = 0;
    while (start <= end) {
        if (arr[start] + arr[end] <= b) {
            start++;
        }
        result++;
        end--;
    }
    cout << result << "\n";
}
