
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool ticket (string x){
    int sum = 0;
    for(int i = 0; i < x.size(); i++) sum += x[i] - '0';
    if (sum % (x[x.size() - 1] - '0') == 0) 
	return true;
    else 
	return false;
}

int main(){
    string x; 
	cin >> x;
    cout << (ticket(x) ? "Yes" : "No");
}