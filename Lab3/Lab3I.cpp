//LAB3 Task I
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y, z;
	cin >> x >> y >> z;
	int arr[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	}
	reverse(arr + y - 1, arr + z);
	for(ll i = 0; i < x; i ++) cout << arr[i] << ' ';
}