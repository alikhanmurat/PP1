
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	
	for (int i = 0; i <= x; i++){
		ll y;
		y = powl(i, i);
		cout << y << ' ';
	}
return 0;
}
