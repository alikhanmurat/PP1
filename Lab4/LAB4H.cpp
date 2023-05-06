//Lab4 Task H
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll x, y, drop = 10001, cnt = 0, gpa;
    cin >> x >> y;
    ll arr[x][y];
    for (ll i = 0; i < x; i++ ){
        for (ll j = 0; j < y; j++){
            cin >> arr[i][j];
        }
    }
    for (ll i = 0; i < x; i++ ){
        for (ll j=0; j < y; j++ )
		cnt += arr[i][j];
        if (cnt < drop){
            drop = cnt;
            gpa = i;
        }
        cnt = 0;
    }
    cout << gpa + 1;
    return 0;  
}