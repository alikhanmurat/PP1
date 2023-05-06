
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void validstring(){
	string x;
	cin >> x;
	int y, cnt = 0;
	cin >> y;
	
	for(int i = 0; i < x.size(); i++){
		if (x[i] >= '0' && x[i] <= '9') {
			cnt++;
}
}

	if (cnt >= y){
	cout << "YES";
	}else if (cnt < y){
	cout << "NO";
}
}

int main(){
	validstring();
return 0;
}
