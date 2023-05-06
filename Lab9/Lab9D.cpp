
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
	cin >> x >> y;
	map <int, int> m;
	
	for (int i = 0; i < x; i++){
		ll z;
		cin >> z;
		m[z]++;
	}
	
	map <int, int> :: iterator it = m.begin();
	
	for (it; it != m.end(); ++it){
		if (it -> first == y){
			cout << it -> second;
			return 0;
		}
	}cout << '0'; 
}
