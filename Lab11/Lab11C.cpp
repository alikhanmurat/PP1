
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, total = 0;
	cin >> x;
	map <string, double> m;
	multimap <float, string> n;
	
	for(int i = 0; i < x; i++){
		string y;
		ll z;
		cin >> y >> z;
		total += z;
		if(!m[y]){
		m[y] = z;
		}else 
		m[y] += z;
	}
	map <string, double> :: iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
		string q = it -> first;
		ll p = it -> second;
		n.insert({p, q});
	}
	multimap <float,string> :: reverse_iterator ti;
	for (ti = n.rbegin(); ti != n.rend(); ti++)
	{
		double percent = ti -> first * 100 / total;
		cout << ti -> second << " " << percent << "%" << endl;
	}
return 0;
}
