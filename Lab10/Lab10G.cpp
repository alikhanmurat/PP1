
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
	string z;
	cin >> x;
	multimap <string, int> m;
	
	for (int i = 0; i < x; i++){
		string name1, name2, name;
		ll point1, point2, all = 0;
		cin >> name1 >> point1;
		cin >> name2 >> point2;
		name += name1 + " and " + name2;
		all += point1 + point2;
		m.insert(pair <string, int> (name, all));
		}
		
		map <string, int> :: iterator it;
		
		for (it = m.begin(); it != m.end(); it++){
			if (it == m.begin()){
				cout << it -> first << ' ' << it -> second << endl;
			}else if (it -> first == z && it -> second == y){
			}else{
			cout << it -> first << ' ' << it -> second << endl;
		    }
		    y = it -> second;
		    z = it -> first;
		} 
return 0;
}
