
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
	cin >> x >> y;
	ll arr[x][y];
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			cin >> arr[i][j];
		}
	}
	ll z;
	cin >> z;
	bool check = true;	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			if (arr[i][j] > z)
				check = false;
		}
	}
	
	if (check == false){
				cout << "Penalty!";
				
			}
			else
			
				cout << "No penalty for today.";
			
	

return 0;
}
/*4 3
11 13 15
17 19 21
23 25 27
29 31 33
40*/