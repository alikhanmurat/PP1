
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, max = 0;
	cin >> x;
	ll arr[x][x];
	int a[x];
	for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){
		cin >> arr[i][j];
		if(arr[i][j]>max) 
		max=arr[i][j];}
		a[i] = max;
		max = 0;
	}
	for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){ 
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
return 0;
}