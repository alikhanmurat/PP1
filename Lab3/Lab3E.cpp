//LAB3 Task E
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int x, sum = 0;
	cin >> x;
	int arr[x];

	for (int i = 0; i < x; i++){
		cin >> arr[i];
		sum = sum + arr[i];
}
cout << sum;
return 0;
}