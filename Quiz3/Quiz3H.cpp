
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	double y, z, min = 2e9;
	cin >> x;
	string w, q;
	
	for (int i = 0; i < x; i++){
		cin >> w >> y >> z;
	
		if (y / z < min){
			min = y / z;
			q = w;
		}
		
	}
    cout << q;
}