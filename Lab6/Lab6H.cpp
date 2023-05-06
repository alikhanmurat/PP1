
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int Valid(string x){
    for(int i = 0; i < x.size(); i++){
        if(x[i] % 2 == 1) 
		return false;
    }
    return true;
}

int main(){
    string x; 
	cin >> x;
    cout << (Valid(x) ? "Valid" : "Not valid");
}