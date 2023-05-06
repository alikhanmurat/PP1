//LAB3 Task H
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x, y, z; 
	long long sum = 0;
	cin >> x >> y >> z;
	long long arr[x];
	
	for (int i = 0; i < x; i++)
		cin >> arr[i];
		
		while (z >= y){
		y = y - 1;
		sum += arr[y];
		y = y + 2;
}

		cout << sum;
		return 0;
}