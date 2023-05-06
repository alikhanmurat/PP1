
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll x; 
	cin >> x;
	vector <int> v;
	
	for(int i = 0; i < x; i++)
	{
		ll y;
		cin >> y;
		v.push_back(y);
	}
	
	ll z, cnt = 0, prime = 0;
	cin >> z;
	
	for(int i = 0; i < v.size(); i++)
	{
		cnt = 0;
		for(int j = 2; j < v[i]-1; j++)
		{
			if(v[i] % j == 0)
			{
				cnt++;
			}
		}
		if(cnt == 0)
		{
			if(v[i] >= z)
			{
				prime++;
			}
		}
    }
    cout << prime;
	return 0;
}

