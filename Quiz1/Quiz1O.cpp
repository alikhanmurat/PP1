//QUIZ Task O
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, a, b, c, d;
	cin >> x;
	
	a = x % 10;
	b = (x / 10) % 10;
	c = (x / 100) % 10;
	d = (x / 1000);
	
	if (a == d && b == c){
		cout << "YES";
	}else
	cout << "NO";
	return 0;
}