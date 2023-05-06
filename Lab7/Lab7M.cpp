
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int y = 1;
int recursion(int x, int y)
{
	if(x == y)
	{
		return y;
	}
	if(x != y)
	{
		cout << y <<" ";
		return recursion(x, y + 1);
	}
	
}
int main()
{
	int x;
	cin >> x;
	cout << recursion(x, y);
return 0;
}

