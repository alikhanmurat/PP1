
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x, y;
	int z, w;
	cin >> x;
	int sum = 0;
	y = x;
	z = x.size() - 1;
	
    reverse (x.begin(), x.end());
	
	for (int i = 0; i < z; i++){
			x[i] = x[i] - 48;
			sum += x[i];
	}
	sum = sum % 10;
	for (int i = 0; i < 1; i++){
		w = y[i];
		w = w - 48;
	}

	if (sum == w)
	cout << "YES";
	else
	cout << "NO";
	return 0;
}