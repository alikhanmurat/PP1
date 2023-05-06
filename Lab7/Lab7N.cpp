
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int check(int arr[] , int x, int y)
{
	if(arr[y - 1] - arr[y - 2]  > x)
	{
		return check(arr, x, y - 1);
	}
	if(y == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int x, y;
	cin >> x >> y;
	int arr[x];
	for(int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + x);
	if(check(arr, y, x)) 
	cout << "cheater";
	else 
	cout << "no";
return 0;
}