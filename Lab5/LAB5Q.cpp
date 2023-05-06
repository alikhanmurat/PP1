
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x, y, z;
	cin >> x >> y;
	
	for (int i = 0; i < y.size() / x.size(); i++){
		z += x;
	}
	if (z == y)
	cout << "YES";
	else
	cout << "NO";
return 0;
}
