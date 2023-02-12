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
    int a, b;
    cin >> a >> b;
    multiset<int> arr;
    for (int i = 0; i < a; i++) {
        int element;
        cin >> element;
        arr.insert(element);
    }
    for (int i = 0; i < b; i++) {
        int element;
        cin >> element;
        auto pointer = arr.upper_bound(element);
        if (pointer == arr.begin()) {
            cout << -1 << "\n";
        } else {
            cout << *(--pointer) << "\n";
            arr.erase(pointer);
        }
    }
}
