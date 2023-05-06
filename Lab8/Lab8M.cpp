
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, z, sum = 0;
	cin >> x;
	
	vector <int> v;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		v.push_back(y);
	}
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++){
		if (v[i] != v[i + 1]){
			sum += v[i];
		}
	}
	cout << sum;
	return 0;
}
