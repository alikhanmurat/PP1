//Lab4 TASK D
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll x;
    cin >> x;
    for (ll i = 0; i < x; i++){
        cout << i << " ";
    }
    cout << endl;
    for (ll i = 1; i < x; i++){
        for (ll j = 0; j < x; j++){
            if (j == 0) 
			cout << i * 1 << " ";
            else 
			cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}

