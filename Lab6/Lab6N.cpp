
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void transport(){
	ll x, y;
	cin >> x >> y;
	ll arr[x][y];
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
		cin >> arr[i][j];
	}
	}
	for (int i = 0; i < y; i++){
		for (int j = 0; j < x; j++){
		cout << arr[j][i] << ' ';
	}
	cout << endl;
}
}

int main(){
	transport();
return 0;
}
