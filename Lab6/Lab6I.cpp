
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string even(string x){
    string y = "";
    for(int i = 0; i < x.size(); i++){
        if(i % 2 == 0 && x[i] >= 'a' && x[i] <= 'z') 
		y += x[i] - ' ';
        else 
		y += x[i];
    }
    return y;
}

int main(){
    string x;
	cin >> x;
    cout << even(x);
}