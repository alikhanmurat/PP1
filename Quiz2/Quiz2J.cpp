
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
    int largest = 0, smallest = 9;
    while (x){
        int y = x % 10;
 
        largest = max(y, largest);
 
        smallest = min(y, smallest);
 
        x = x / 10;
    }
    cout << largest << " " << smallest;
    return 0;
}
