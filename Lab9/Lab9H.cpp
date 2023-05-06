
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	map <string, int> m;
	map <string, int> n;
	
	for(int i = 1; i <= x; i++)
	{ 
		string y;
		cin >> y;
		if (!m[y]) 
		n[y]=i;
		m[y]++;
	}
	map <string, int> :: iterator it;
	
	for (it = n.begin(); it != n.end(); ++it)
	{
		cout << it -> first << " " << it -> second<<endl;
	}
return 0;
}

