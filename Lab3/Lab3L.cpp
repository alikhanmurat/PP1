//LAB3 Task L
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll x, y;
    cin >> x;
    ll a[x];
    for ( int i = 0; i < x; i++){
        cin >> a[i];
    }
    cin >> y;
    ll b[y];
    for ( int i = 0; i < y; i++){
        cin >> b[i];
    }
    ll z = x + y;
    ll c[z];
    for ( int i = 0; i < x; i++){
        c[i] = a[i];
    }
    for ( int i = 0; i < y; i++){
        c[x+i] = b[i];
    }
    sort (c, c + z);
    for ( int i = 0; i < z; i++){
        cout << c[i] << " ";
    }
return 0;
}