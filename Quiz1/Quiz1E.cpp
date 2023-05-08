//QUIZ Task E
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	double y = sqrt(x);
	x = sqrt(x);
	
	if (x == y){
	cout << "Perfecto";
	}else
	cout << "Simple";

	return 0;
}

