
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string x, y; 
	cin >> x >> y;
    int z, cnt = 0; 
	cin >> z;

    for(int i = 0; i < x.size(); i++){
	    if(y[0] == x[i]) 
		cnt++;
    }
    if (cnt == z)
    cout << "YES";
    else 
    cout << "NO";

return 0;
}
