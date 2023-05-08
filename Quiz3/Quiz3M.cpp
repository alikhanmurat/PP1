
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll sum = 0;
	string x;
	cin >> x;
	
	for (int i = 0; i < x.size(); i++){
		sum += x[i];
	}
	if (sum >= 300){
		cout << "It is tasty!";
	}
	else 
	cout << "Oh, no!";
return 0;
}
