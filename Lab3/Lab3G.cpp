//LAB3 Task G
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int x;
	cin >> x;
	int arr[x];
	
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
    int min;
    min = arr[0];
    for (int i = 0; i < x; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
    for (int i = 0; i < x; i++){
    	if(arr[i] == max){
		arr[i] = min;
	}
	}
	for(int i = 0; i < x; i ++)
	cout << arr[i] << ' ';
return 0;

}