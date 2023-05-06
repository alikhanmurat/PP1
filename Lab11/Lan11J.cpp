
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z;
	cin >> x >> y >> z;
	multimap <double, vector <int> > m;
	vector <int> v;
	 
	for (int i = 0; i < z; i++){
		v.clear();
		ll x1, y1;
		cin >> x1 >> y1;
		v.push_back(x1);
		v.push_back(y1);
		m.insert({sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y)), v});
	}
	multimap <double, vector <int> > :: iterator it;
	
	for (it = m.begin(); it != m.end(); it++){
		cout << it -> second[0] << ' ' << it -> second[1] << endl;
	}
return 0;
}
