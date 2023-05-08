//QUIZ Task K
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	int ans = 0;
	while (x > 0){
		ans++;
		if (ans % 2 == 0 && ans % 7 != 0){
			x -= 4;
		}else if (ans % 2 == 1 && ans % 7 != 0){
			x += 3;
		}
	}
	cout << ans + 1;
	return 0;
}
