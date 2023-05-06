
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int subs(int x, int y){
	return abs(x - y);
}
int main(){
	ll x;
	cin >> x;
	ll arr1[x], arr2[x];
			for (int i = 0; i < x; i++){
		cin >> arr1[i];
}
        for (int i = 0; i < x; i++){
        	cin >> arr2[i];
}
		for (int i = 0; i < x; i++){
			cout << subs(arr1[i], arr2[i]) << ' ';
}
return 0;
}
