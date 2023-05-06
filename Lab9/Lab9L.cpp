
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x, y, z;
	cin >> x;
	multimap <int, int> m;
	
	for(int i = 1; i <= x; i++){
		cin >> y >> z;
	    m.insert ({y + z, i});
    }
    
    multimap <int, int> :: iterator it;
    	
    for (it = m.begin(); it != m.end(); ++it)
    {
    	cout << it->second <<" ";
	}
return 0;
}
