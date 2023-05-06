#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, cnt = 0;
	cin >> x;
	int arr[x];

	for (int i = 0; i < x; i++){
		cin >> arr[i];
		
		while (arr[i] > 0){
			if (arr[i] % 10 == 0){
				cnt++;
			} arr[i] = arr[i] / 10;
			
		}
	}
cout << cnt;
return 0;
}