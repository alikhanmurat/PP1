//LAB3 Task B
#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, cnt = 0;
	cin >> x;
	int arr[x];
	
	for (int i; i < x; i++){
		cin >> arr[i];
	if (arr[i] >= 1){
		cnt++;
	}else if (arr[i] < 0){
	cout << "";}
	}
	cout << cnt;
	return 0;
}