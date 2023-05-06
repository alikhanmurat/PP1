//LAB3 Task M
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, sum = 0;
	for (;;) {
		cin >> x;
		sum += x;
		if (cin.get() == '\n')
		break;
	}
	cout << sum;
	return 0;
}
