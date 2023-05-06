
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	map <char,int> m;
	set <char> s;
	set <char> ::iterator it;
	for(int i = 0; i < x; i++){
		string z;
		cin >> z;
		for (int j = 0; j < z.size(); j++) 
		s.insert(z[j]);
	    for (it = s.begin(); it != s.end(); it++)
		{
			m[*it]++;
		}
		s.clear();
	}
	vector <char> v;
	map <char, int> ::iterator ti;
	for (ti = m.begin(); ti != m.end(); ti++){
		if (ti -> second == x) 
		v.push_back(ti -> first);
	}
	if(v.empty()){
	cout << "NO COMMON CHARACTERS";
	}else{
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
	}
return 0;
}