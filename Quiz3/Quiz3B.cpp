
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	string y;
	
	cin >> x;
	cin >> y;
	
	for (int i = 0; i < y.size(); i++){
		if (x[0] == y[i]){
			y[i] = '~';
		}
	}
	for (int i = 0; i < y.size(); i++){
		if (y[i] != '~')
		cout << y[i];
	}
return 0;
}
