
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dectohex(){
    int x;
    string y = "", hex = "0123456789ABCDEF";
    cin >> x;
    while (x > 0){
        y += hex[x % 16];
        x /= 16;
    }
    reverse(y.begin(), y.end());
    cout << y;
}

int main(){
	dectohex();
	return 0;
}