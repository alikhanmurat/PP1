
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool book(ll x, ll y, ll arr[]){
	for (int i = 0; i < x; i++){
		if (y == arr[i])
			return true;
	}
		return false;

}

int main(){
	ll x, y;
	cin >> x;
	ll arr[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	}
	cin >> y;
	
	cout << ((book(x, y, arr)) ? "Yes" : "No");
return 0;
}
