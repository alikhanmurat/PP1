
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	map <string, int> m;
	
	for (int i = 0; i < x; i++){
		string y;
		ll z;
		cin >> y >> z;
		if (!m[y]){
			m[y] = z;
		}else 
		m[y] = m[y] + z;
	}
	
	map <string, int> :: iterator it;
	
	for (it = m.begin(); it != m.end(); ++it){
		cout << it -> first << ' ' << it -> second << endl;
	}
return 0;
}
