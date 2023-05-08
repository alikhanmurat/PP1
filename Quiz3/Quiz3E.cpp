
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll sum = 0;
	string x;
	cin >> x;
	
	for (int i = 0; i < x.size(); i++){
		if (x[i] <= '9' && x[i] >= '0'){
			sum += x[i] - 48;
		}
	}
	cout << sum;
return 0;
}
