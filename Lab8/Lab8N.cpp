
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
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++){
		if (v[i] == v[i + 1]){
			v[i + 1] = '~';
		}
		if (v[i] % 2 == 0){
			v[i] = '~';
		}
	}
	
	for (int i = 0; i < v.size(); i++){
		if (v[i] != '~'){
			cout << v[i] << ' ';
		}
	}
	return 0;
}
