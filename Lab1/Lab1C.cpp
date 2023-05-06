#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y = 0, z = 8;
	cin >> x;
	while (x > 0){
		int w = x % 2;
		y = y + ( w * z);
		z = z / 2;
		x = x / 2;
	}
	
	cout << y;
}
