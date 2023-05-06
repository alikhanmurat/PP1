
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void rev(ll x, ll arr[]){
	for (int i = x - 1; i >= 0; i--){
		cout << arr[i] << ' ';
	}
}

int main(){
	ll x;
	cin >> x;
	ll arr[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	}
	rev(x, arr);
return 0;
}
