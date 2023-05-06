
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x, y;
	cin >> x >> y;
	
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	
	if (x == y)
	cout << "YES";
	else
	cout << "NO";
return 0;
}
