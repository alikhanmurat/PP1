
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

	int x, y;
	cin >> x >> y;
	vector <int> v(x);
	for(int i  = 0; i < x; i++)
	{
		cin >> v[i];
	}
	rotate(v.begin(), v.begin() + y, v.end());
	reverse(v.begin(), v.end());
	
	for(int i = 0; i < x; i++)
	{
		cout <<v[i]<<" ";
	}
return 0;
}