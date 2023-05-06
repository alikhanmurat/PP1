//Lab4 TASK E
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x;
	cin >> x;
	int arr[x][x];
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j <= i; j++){
			cout << "[*]";
		}
		cout << endl;
	}
return 0;
}
