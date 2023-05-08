
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll sum = 0;
	string x, y, z;
	cin >> x;
	
	reverse (x.begin(), x.end());
	
	for (int i = 0; i < x.size(); i++){
		x[i] = x[i] - 48;
		y = x[i];
		sum += (pow(2, i) * x[i]);
	}
	cout << sum;
return 0;
}