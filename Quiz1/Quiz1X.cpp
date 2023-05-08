//QUIZ Task X
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, z;
	cin >> x >> y >> z;
	
	if (x == y && x == z && y == z){
		cout << "NO";
	}else if (x == y || x == z || y == z){
		cout << "YES";
	}else 
	cout << "NO";
	return 0;
}
