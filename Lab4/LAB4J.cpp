//Lab4 TASK J
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z;
    cin >> x >> y;
    for(ll i = 0; i < x; i ++) {
    for(ll j = 0; j < y; j ++) {
    cin >> z;
    if((i + j) % 2 == 0)
	cout << z + 1 << ' ';
    else 
	cout << z - 1 << ' ';
  }
  cout << endl;
  }
return 0;
}
