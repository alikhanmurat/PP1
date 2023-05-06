
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	  string x; 
	  cin >> x;
    char max = x[0];

    for(int i = 0; i < x.size(); i++){
        if(x[i] > max) 
		max = x[i];
    }
    cout << char(max);

return 0;
}
