
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll y;
	string x;
	cin >> y >> x;
	
	for (int i = 0; i < x.size(); i++){
		if (x[i] >= 'A' && x[i] <= 'Z'){
			x[i] += y;
		}
		if (x[i] > 90){
			x[i] -= 26;
		}
		cout << x[i];
	}
return 0;
}

