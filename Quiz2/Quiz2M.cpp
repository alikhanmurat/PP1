
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z = -60;
	cin >> x >> y;
	
	if (y % x == 0 or x % y == 0){
		while (y != x * pow(2, z)){
			z++;
		}
		cout << "YES " << z;
		
	}else if (y % x != 0 or x % y != 0){
		cout << "NO";
	}
return 0;
}
