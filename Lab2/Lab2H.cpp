#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, sumeven = 0, sumodd = 0;
	cin >> x;
	int arr[x];
	
	for ( int i = 0; i < x; i++){
		cin >> arr[i];

	if (arr[i] % 2 == 0){
	sumeven++;	 
	}else if (arr[i] % 2 != 0){
		sumodd++;
	}
}
cout << sumeven << ' ' << sumodd;
	return 0;
}