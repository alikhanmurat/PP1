//Lab4 TASK G
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll x;
  cin >> x;
  for(ll i = 1; i <= x; i++) {
   for(ll j = 1; j <= x; j++) {
    if(x - i + 1 == j)
	cout << i;
    else cout << '.';
   }
   cout << endl;
  }
}
