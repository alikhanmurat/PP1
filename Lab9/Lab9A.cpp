
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	vector <pair <int, int> > v(x);
	
	for (int i = 0; i < x; i++){
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end());

    for (int i = 0; i < x; i++){
        cout << v[i].first << " "<< v[i].second << endl;
		}
	return 0;
}
