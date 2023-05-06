
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool prime(int x)
{
	if (x == 1 or x == 0 or x == -1)
	return 0;
	
	if (x < 0){
	x = x * (-1);
}

	for (int i = 2; i < x; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(){
	ll x;
	cin >> x;
	vector <int> v(x);
	for(int i = 0; i < x; i++)
	{
		cin >> v[i];
	}
	
	ll cnt = count_if(v.begin(), v.end(), prime);
	cout << cnt;
return 0;
}
