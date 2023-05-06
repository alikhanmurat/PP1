
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	set <int> s;
	
	for (int i = 0; i < x; i++){
		ll y;
		cin >> y;
		s.insert(y);	
	}
	if (x == s.size()){
		cout << "YES";
	}else 
	cout << "NO";
return 0;
}
