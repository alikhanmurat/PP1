
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, z, w;
	cin >> x;
	
	vector <int> v;
	
	for (int i = 0; i < x; i++){
		int y;
		cin >> y;
		v.push_back(y);
	}
	
	cin >> z >> w;
	v.erase(v.begin() + z, v.begin() + w + 1);
	
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
return 0;
}
