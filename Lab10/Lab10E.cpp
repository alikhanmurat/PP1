
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, sum = 0;
	cin >> x;
	map <string, double> m;
	
	for (int i = 0; i < x; i++){
		ll y; 
		cin >> y;
		
		for (int i = 0; i < y; i++){
			string z;
			ll w;
			cin >> z >> w;
			
			if (!m[z]){
				m[z] = w;
			}else {
				m[z] = m[z] + w;
			}
			sum += w;
		}
	}
	map <string, double> :: iterator it;
	
	for (it = m.begin(); it != m.end(); it++){
		cout << it -> first << ' ' << it -> second * 100 / sum << endl;
	}
return 0;
}
