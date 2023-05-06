
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int infinite()
{
	ll x;
	cin >> x;
	if (x == 0)
	{
		return 0;
	}
	return x + infinite();
	
}
int main(){
	cout << infinite();
return 0;
}
