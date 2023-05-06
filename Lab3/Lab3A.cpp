//LAB3 Task A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	int arr[x];
	
	for (int i; i < x; i++){
		cin >> arr[i];
	 if (arr[i] % 2 != 0){
		cout << arr[i] << ' ';
	}else 
	cout << ""; 
	
}
return 0;
}