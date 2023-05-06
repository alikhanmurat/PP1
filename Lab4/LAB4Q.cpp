//Lab4 TASK Q
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z;
    cin >> x;
    for (int i = 0; i < x; i++){
        y = x - i - 1;
        z = 2 * i + 1;
        for (int j = 0; j < y; j++){
            cout << ".";
        }
        for (int j = 0; j < z; j++){
            cout << "*";
        }
        for (int j=0; j < y; j++){
            cout << ".";
        }
        cout << endl;
    }
return 0;
}
