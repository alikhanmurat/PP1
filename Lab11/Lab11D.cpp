
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
	cin >> x >> y;
	ll arr[x][x];
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < x; j++){
			if(arr[i][j] == arr[i][j+1] && arr[i+1][j] == arr[i+1][j+1] && arr[i][j] == arr[i+1][j]){
				cout <<"NO";
				return 0;
			}
		}
	}
	cout << "YES";
return 0;
}