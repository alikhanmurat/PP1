
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int degree(int x){
	return pow(2, x);
}

int main(){
	ll x;
	cin >> x;
	cout << degree(x);
}
