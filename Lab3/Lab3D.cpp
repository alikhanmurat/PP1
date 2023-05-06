//LAB3 Task D
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int x;
	cin >> x;
	int arr[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	}
	int max, position = 0;
	max = arr[0];
	for (int i = 0; i < x; i++){
		if (arr[i] > max){ 
		max = arr[i];
		position = i;
		}
	}cout << position + 1;
return 0;

}