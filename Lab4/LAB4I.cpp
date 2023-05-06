//Lab4 TASK I
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z;
    cin >> x >> y;
    for(ll i = 1; i <= x; i ++) {
    for(ll j = 1; j <= y; j ++) {
    cin >> z;
    ll w = sqrt(z);
    if(w * w == z)
	cout << w << ' ';
    else cout << z << ' ';
  }
  cout << endl;
  }
return 0;
}
