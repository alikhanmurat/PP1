
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	char x[1000000];
	cin >> x;
	for (int i = 0; i < strlen(x); i++){
	if (x[i] == 122)
	x[i] -= 26;
	x[i] = x[i] + 1;
	cout << x[i];
}
return 0;
}
