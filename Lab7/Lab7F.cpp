
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll cnt = 0;
    string x;
    cin >> x;
    for(int i = 0; i < x.size(); i++)
	{
		if(x[i] % 2 == 0)
		{
			cnt++;
		}
	}
	cout << cnt;
return 0;
}