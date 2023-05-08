
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z, w, q;
	cin >> x >> y >> z;
	w = x;
	x = sqrt(x);
	y = sqrt(y);
	
	if (w == x * x){
	if (z == 1){
	for (int i = x; i <= y; i++){
		cout << i * i << ' ';
	}
}
	else if (z == -1){
		for (int i = y; i >= x; i--){
		cout << i * i << ' ';
	}
}
}
    else if (x * x != w){
		if (z == 1){
	for (int i = x + 1; i <= y; i++){
		cout << i * i << ' ';
	}
}
	else if (z == -1){
		for (int i = y; i >= x + 1; i--){
		cout << i * i << ' ';
	}
}    	
	}
   
return 0;
}
