
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
	cin >> z >> w;
	v.insert(v.begin() + z, w);
	
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
return 0;
}
