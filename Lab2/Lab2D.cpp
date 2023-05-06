#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	if (x <= y){
		cout << 2;
	} else if (2*x % y == 0){
		cout << 2*x / y; 
	}else if (2*x % y != 0){
		cout << 2*x / y + 1;
}
	
	return 0;
}