//QUIZ Task F
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll c1, c2, c3, c4, c5, c6;
	cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
	if (c1 <= c5 && c3 >= c5 && c2 >= c6 && c4<= c6){
		cout << "yes";
	}else
	cout << "no";
	return 0;
}
