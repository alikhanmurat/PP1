
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, cnt = 0;
	cin >> x;
	ll arr1[x], arr2[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr1[i];}
	for (int i = 0; i < x; i++){
		cin >> arr2[i];}
	ll y;
	cin >> y;
	for (int i = 0; i < x; i++){
		
		if (arr1[i] <= y and y <= arr2[i]){
			cnt++;
		}
	}cout << cnt;
return 0;
}
