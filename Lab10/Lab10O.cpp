
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	vector <int> v(x);
	
	for (int i = 0; i < x; i++){
		cin >> v[i];
	}for (int i = 0; i < x; i++){
		string y;
		while (v[i] > 0){
			y += to_string(v[i] % 2);
			v[i] = v[i] / 2;
		}
		reverse (y.begin(), y.end());
		cout << y << endl;
	}
return 0;
}
