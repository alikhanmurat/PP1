
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
	ll x, z, w;
	cin >> x;
	
	vector <int> v;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		v.push_back(y);
	}
	
	sort (v.begin(), v.end());
	
	cout << v[x - 1] - v[0];
return 0;
}
