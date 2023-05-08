//QUIZ Task Q
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, z, sumoverall, sumboth;
	cin >> x >> y >> z;
	sumoverall = x + y + z;
	sumboth = x + y;
	
	if (sumoverall >= 70 && sumboth >= 30 && z >= 20){
		cout << "YES!";
	}else 
	cout << "NO.";
	return 0;
}
