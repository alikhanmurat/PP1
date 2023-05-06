
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int factorial(int x)
{
	if(x == 0)
	{
		return 1;
	}
	return x * factorial(x - 1);
}
int main()
{
    int x;
    cin>> x;
    cout << factorial(x);
return 0;
}