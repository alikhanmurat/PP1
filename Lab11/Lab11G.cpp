
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	map <string, int> m;
	map <string, int> n;
	for(int i = 0; i < x; i++)
	{
		string y; 
		ll z;
		cin >> y >> z;
 		if (m[y] != z){
			m[y] = z;
			n[y]++;
		}
		else{
			continue;
		}
	}
	
	map <string,int> :: iterator it;
	for (it = n.begin(); it != n.end(); ++it)
	{
		if(it->second >= 3){
			cout << it->first << " " << "+1" << endl;
		}
		else{
			cout << it -> first << " " << "NO BONUS" <<endl;
		}
	}
return 0;
}