//QUIZ Task J
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long num1, num2, num3, p1, p2, p3, m;
	cin >> num1 >> num2 >> num3 >> p1 >> p2 >> p3 >> m;
	if ((num1 * p1) + (num2 * p2) + (num3 * p3) <= m){
		cout << "Yes";
	}else
	cout << "No";
	return 0;
}
