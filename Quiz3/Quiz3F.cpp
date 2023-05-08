
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	cin >> x;
	
	for (int i = 0; i < x.size(); i++){
		if (x[i] >= 'a' && x[i] <= 'z'){
			cout << x[i];
		}
	}
return 0;
}
