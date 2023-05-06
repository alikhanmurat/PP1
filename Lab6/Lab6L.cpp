
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


bool Valid(string x, int y){
    int cnt = 0;
	 
    for(int i = 0; i < x.size(); i++){
        if(x[i] >= '0' && x[i] <= '9'){
		cnt++;
	}else
	cnt = 0;
	if(cnt == y) return true;
    }
    return false;
}

int main(){
    string x; 
	cin >> x;
    int y; 
	cin >> y;
    cout << (Valid(x, y) ? "Valid" : "Not valid");
}