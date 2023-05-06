
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x; 
	cin >> x;
	vector <string> v;
	vector <int> s;
	
	for (int i = 0; i  < x; i++){
		string y;
		ll z;
		cin >> y >> z;
		v.push_back(y);
		s.push_back(z); 
	} 
	
	sort (v.begin(), v.end());
	sort (s.begin(), s.end());
	
	for (int i = 0; i < x; i++){
		cout << v[i] << ' ' << s[i] << endl;
	}
return 0;
}
