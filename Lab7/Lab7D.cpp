
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int i = 0;
int sum(string x, int i)
{
	if(i == x.size() - 1)
	{
		return int(x[i]) - '0';
	}
	return int(x[i] - '0') + sum(x, i + 1);
}
int main(){
	string x;
	cin >> x;
	cout << sum(x, i);
return 0;
}
