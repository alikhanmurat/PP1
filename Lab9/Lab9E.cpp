
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, cnt = 0;
	cin >> x;
	map <string, int> m;
	
	for (int i = 0; i < x; i++){
		string y; 
		cin >> y;
		m[y]++;
	}
	
	map <string, int> :: iterator it;
	
	for (it = m.begin(); it != m.end(); ++it){
		if (it -> second == 3){
			cnt++;
		}
	}
	cout << cnt;
return 0;
}
