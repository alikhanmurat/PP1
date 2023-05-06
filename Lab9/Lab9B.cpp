
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	
	vector <int> v, u;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		
		if (y % 2 == 0){
			v.push_back(y);
		}
		else if (y % 2 != 0){
			u.push_back(y);
		}	
	}
	
	sort (v.begin(), v.end());
	reverse (v.begin(), v.end());
	sort (u.begin(), u.end());
	
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
	for (int i = 0; i < u.size(); i++){
		cout << u[i] << ' ';
	}
return 0;
}
