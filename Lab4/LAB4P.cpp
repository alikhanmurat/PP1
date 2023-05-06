//Lab4 TASK P
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll x, sum = 0;
    cin >> x;
    ll arr[x][x];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= x; i++){
        for (int j=0; j <= x; j++){
            if (i + j == x-1 && arr[i][j] > -999999 ){
            sum += arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}
