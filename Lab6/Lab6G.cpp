#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void vowels(){
string x, y = "aeoiuAEOIU";
getline (cin >> ws, x);


for (int i = 0; i < x.size(); i++){
	for (int j = 0; j < y.size(); j++){
		if (x[i] == y[j])
			x[i] = '`';
	} 
	if(x[i] != '`')
		cout << x[i];
}
}

int main (){
	vowels();
return 0;
}

