
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int fibonacci(int x)
{
	if(x <= 1)
	{
		return x;
	}
	return fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
	int x;
	cin >> x;
	cout <<fibonacci(x - 1);
return 0;
}

