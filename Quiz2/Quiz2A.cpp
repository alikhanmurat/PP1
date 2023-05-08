
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, even = 0, odd = 0, lh = 0, rh = 0, cnte = 0, cnto = 0;
	cin >> x;
	ll arr[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < x; i++){
	if (arr[i] % 2 == 0){
		even += arr[i];
		cnte++;
	}
	else if (arr[i] % 2 != 0){
		odd += arr[i];
		cnto++;
	}
	lh = even * cnte;
	rh = odd * cnto;
}
cout << "Left hand magic power: " << lh << endl << "Right hand magic power: " << rh;
return 0;
}
