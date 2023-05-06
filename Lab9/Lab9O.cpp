
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
	cin >> x;
	map <string, string> m;
	
	for (int i = 0; i < x; i++){
		string z, w;
		cin >> z >> w;
		m[z] = w;
	}
	cin >> y;
	map <string, string> :: iterator it;

	for (int i = 0; i < y; i++){
		string p, q;
		cin >> p >> q;
		
		if (m.find(p) == m.end()){
		cout << "login error" << endl;
	    }else {
	    	it = m.find(p);
	    	if (it -> second == q){
	    		cout << "correct password" << endl;
			}else {
				cout << "password error" << endl;
			}
		} 
	}
return 0;
}
