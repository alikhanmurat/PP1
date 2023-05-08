
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main (){
	ll x, cnt = 0;
	cin>> x;
	ll arr[x];

    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    
	sort (arr, arr + x);
	
	cout << arr[x - 1] * arr[x - 2];
    return 0;
}
