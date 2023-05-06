
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll x;
  cin >> x;
  vector <int> v;
  vector <int> c;
  for (int i = 0; i < x; i++){
  	ll y;
  	cin >> y;
  	v.push_back(y);
  }
  c = v;
  reverse (c.begin(), c.end());
  
  for (int i = 0; i < x; i++){
  	if (v[i] == c[i]){
  		cout << "OK" << endl;
	}else 
	cout << "Instead of " << v[i] << " here was " << c[i] << endl;
  }
}