
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int find (int arr[], int y, int x)
{
	if( x < 0)
	{
		return 0;
	}
	if(arr[x - 1] != y)
	{
		return find(arr, y, x - 1);
	}
	else
	{
		return 15;
	}
}
int main()
{
	int x, y;
	cin >> x;
	int arr[x];
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	cin >> y;
	if (find(arr, y, x)) 
	cout <<"Yes";
	else 
	cout << "No";
return 0;
}