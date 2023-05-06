
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int i = 0;
int sum(string x, int i)
{
	if(i == x.size())
	{
		return 0;
	}
	else
	{
		return (x[i] - '0') / 2 + sum(x, i + 1);
	}
}
int main(){
	string x;
	cin >> x;
	cout << sum(x, i);
return 0;
}
