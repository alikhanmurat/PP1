//QUIZ Task V
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y;
	cin >> x;
	y = 1;
	while (y <= pow(2, x)){
		cout << y << endl;
		y = y * 2;
	}
	return 0;
}
