
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, cnt = 0;
	cin >> x;
	map <int, int> m;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		m[y]++;
	}
	
	map<int, int> :: iterator it = m.begin();
	
	for (it; it != m.end(); ++it){
		if (it -> second >= 2){
			cnt++;
		}
	}
	cout << cnt;
return 0;
}
