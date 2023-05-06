
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, z;
	cin >> x;
	
	vector <int> v;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		v.push_back(y);
	}
	cin >> z;
	sort(v.begin(), v.end());
	
	for (int i = 0; i < z; i++){
		cout << v[i] << ' ';
	}
return 0;
}
