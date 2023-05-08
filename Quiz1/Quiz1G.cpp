//QUIZ Task G
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, sum = 0;
	cin >> x;
	long long arr[x];
	
	for (int i = 0; i < x; i++){
		cin >> arr[i];
		sum += arr[i];
	}long long max;
	max = arr[0];
	for (int i = 0; i < x; i++){
		if (arr[i] > max){
			max = arr[i];
		}
}
	cout << sum << ' ' << max;
	return 0;
}
