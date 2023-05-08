//QUIZ Task S
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, z;
	cin >> x >> y >> z;
	
	if (x == y || y == z || x == z){
		cout << "Yes";
	}else
	cout << "No";
	return 0;
}
