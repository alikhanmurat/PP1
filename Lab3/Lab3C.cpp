//LAB3 Task C
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int x;
	cin >> x;
	int arr[x] = {};
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	} 
	int max;
	max = arr[0];
	for (int i = 0; i < x; i++){
		if (arr[i] > max){
			max = arr[i];
		}
}
cout << max;
	return 0;
}