//QUIZ Task R
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, mul = 1, sum = 0, sumoverall = 0;
	cin >> x;
	
	while (x > 0){
		y = x % 10;
		sum = sum + y;
		mul = mul * y;
		x = x / 10;
	}
	sumoverall = mul + sum;
	cout << sumoverall;
	return 0;
}
