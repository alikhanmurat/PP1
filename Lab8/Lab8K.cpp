
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, sum = 0;
	cin >> x;
	
	vector <int> v;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		v.push_back(y);
	}
	
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	ll z;
	cin >> z;
	
	for (int i = 0; i < z; i++){
		sum += v[i];
	}
	
	cout << sum;
return 0;
}
