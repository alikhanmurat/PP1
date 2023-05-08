
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	getline (cin, x);
	
	for (int i = 0; i < x.size(); i++){
		if (x[i] >= 'A' && x[i] <= 'Z'){
			x[i] += 1;
		}
		if (x[i] >= 'a' && x[i] <= 'z'){
			x[i] += 1;
		}
		if (x[i] > 90 && x[i] < 95){
			x[i] -= 26;
		}
		if (x[i] > 122){
			x[i] -= 26;
		}
		cout << x[i];
	}
return 0;
}
