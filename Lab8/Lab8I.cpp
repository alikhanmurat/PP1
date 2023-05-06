
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;

	vector <int> v;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		v.push_back(y);
	}
	
	ll z;
	cin >> z;
	
	for (int i = 0; i < v.size(); i++){
		if (v[i] == z){
			cout << "Yes";
			return 0;
		}
	}
	
	cout << "No";
return 0;
}
