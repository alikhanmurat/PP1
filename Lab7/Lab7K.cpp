
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int i = 0;
int j = 0;
int max(string x, int i, int j)
{
	
	if((x[i] - '0') > j)
	{
		j = (x[i] - '0');
	}
	if(i == x.size())
	{
		return j;
	}
	else
	{
		return max(x, i + 1, j);
	}
}
int main()
{
	string x;
	cin >> x;
	cout << max(x, i, j);
return 0;
}