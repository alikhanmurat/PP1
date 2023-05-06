
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	cin >> x;
	vector <char> v;
	vector <char> s;
	
	for (int i = 0; i < x.size(); i++){
		v.push_back(x[i]);
	}
	sort (v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != v[i + 1]){
		s.push_back(v[i]);
		}else 
		i++;
	}
	if (s.size() > 1){
	cout <<"JOJO";
	}else 
	cout << "ZA WARUDO TOKI WO TOMARE";
return 0;
}