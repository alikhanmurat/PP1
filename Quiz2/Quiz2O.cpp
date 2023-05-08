
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, sum;
	cin >> x >> y;
	ll arr[x][y];
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++)
		cin >> arr[i][j];
	}
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
		sum += arr[i][j];
	}
	    sum = sum / y;
	    cout << sum << ' ';
	    sum = 0;
}
return 0;
}
