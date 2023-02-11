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
    map<char, int> fre;
    for (auto &i: x) {
        fre[i]++;
    }
    char temp = ' ';
    string forward = "";
    string backward = "";
    int counter = 0;
    for (auto &i: fre) {
        if (i.second & 1) {
            counter++;
            i.second -= 1;
            temp = i.first;
            int z = i.second;
            for (int j = 0; j < z / 2; j++)
                forward += i.first;
            for (int j = 0; j < z / 2; j++)
                backward += i.first;
        } else {
            int z = i.second;
            for (int j = 0; j < z / 2; j++)
                forward += i.first;
            for (int j = 0; j < z / 2; j++)
                backward += i.first;
        }
    }
    if (counter > 1) {
        cout << "NO SOLUTION\n";
    } else {
        reverse(backward.begin(), backward.end());
        if (temp == ' ')
            cout << forward + backward << "\n";
        else
            cout << forward + temp + backward << "\n";
    }
}