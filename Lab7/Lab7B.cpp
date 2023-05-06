//LAB7
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string y = "";
string binary(int x){
	if(x == 0)
	{
		return '0' + y;
	}
	if(x == 1)
	{
		
		return '1' + y;
	}
	y = char(x % 2 +'0') + y;
	return binary (x / 2);
}
int main()
{
	ll x;
	cin >> x;
	cout << binary(x);
return 0;	
}
