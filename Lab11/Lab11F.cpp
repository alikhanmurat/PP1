
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z;
	cin >> x >> y >> z;
	vector <int> v;
	for(int i = 1; i <= x; i++){
		if (x % i == 0 && y % i == 0){
			v.push_back(i);
		}
	}
	reverse(v.begin(), v.end());
	cout<< v[z - 1]<<" ";
return 0;
}
