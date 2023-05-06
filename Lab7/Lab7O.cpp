
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string x = ""; 
string k_inary(int y, int z)
{
	if(y == 0)
	{
		return x;
	}
	if(int(y % z) > 9 )
	{
	x = char(y % z + 55) + x;
	return k_inary(y / z, z);
	}
	if(48 <= y % z <= 57)
	{
		x = char(y % z + 48) + x;
		return k_inary(y / z, z);
	}

}
int main()
{
	int y, z;
	cin >> y >> z;
	cout << k_inary(y, z);
return 0;
}
