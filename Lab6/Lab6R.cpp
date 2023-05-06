
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void up(){
	char x;
	cin >> x;
	
	if (x >= 'a' && x <= 'z'){
		cout << (char) toupper (x);
	}else if (x >= 'A' && x <= 'Z'){
		cout << x;
	}
}
int main(){
	up();
return 0;
}
