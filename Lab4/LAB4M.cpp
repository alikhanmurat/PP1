//Lab4 TASK M
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
  cin >> x;
  y = x;
  ll z[x + 1][x + 1];
  ll lmax = 0, rmax = x + 1, dmax = x + 1, umax = 0;
  ll l = 1, r = 0, cal = 1;
  while(1) {
   ll l1 = l, r1 = r;
   while(r + 1 < rmax) 
   {
   z[l][r + 1] = cal;
    cal ++; 
    r ++;
  }
  umax ++;
  while(l + 1 < dmax) {
   z[l + 1][r] = cal;
    cal ++;
    l ++;
  }
  rmax --;
  while(r - 1 > lmax) {
   z[l][r - 1] = cal;
    cal ++;
    r --;
  }
  dmax --;
  while(l - 1 > umax) {
   z[l - 1][r] = cal;
    cal ++;
    l --;
  }
  lmax ++;
  if(l1 == l && r1 == r)
  break;
 }
 for(ll i = 1; i <= x; i ++) {
  for( ll j = 1; j <= y; j ++)
  cout << z[i][j] << ' ';
  cout << endl;
 }
return 0;
}
