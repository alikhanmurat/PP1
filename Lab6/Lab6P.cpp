
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int positive(){
	ll x;
	cin >> x;
	if (x < 0){
		cout << x - (2 * x);
	}else if (x > 0){
		cout << x;
	}
}
int main(){
	positive();
return 0;
}
