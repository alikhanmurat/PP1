
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sum (string x){
    int digit = 0;
    for(int i = 0; i < x.size(); i++) 
	digit += x[i] - '0';
    return digit;
}

int main(){
    string x; 
	cin >> x;
    cout << sum(x);
}