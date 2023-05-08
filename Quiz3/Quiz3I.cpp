
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll sum = 0;
    string x, y;
    cin >> x >> y;
    char z;
    cin >> z;
    
    for (int i = 0; i < y.size(); i++){
        for (int j = 0; j< x.size(); j++){
            if (y[i] == x[j]){
			x[j] = z;
		}
        }
    }
    cout << x;
    return 0;
}