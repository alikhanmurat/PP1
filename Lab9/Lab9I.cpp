
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	map <string, int> m;
	
	for (int i = 0; i < x; i++){
		string y;
		cin >> y;
		
		if (!m[y]){
			cout << "new user added" << endl;
		}else 
		cout << "user already exists" << endl;
		m[y]++;
	}
return 0;
}
