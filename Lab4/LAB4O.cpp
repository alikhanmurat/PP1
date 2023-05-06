//Lab4 TASK O
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll x, z, w, max = -999999;
    cin >> x;
    ll arr[x][x];
    for (int i = 0; i < x; i++){
        for (int j=0; j < x; j++){
            cin >> arr[i][j];
        }
    }
    int i = 0;
    int j = 0;
    for (i = j; i < x; i++){
        for (j = i; j < x; j++){
            if (i == j && arr[i][j] > max){
            max = arr[i][j];
            z = i + 1;
            w = j + 1;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << z << ";" << w;
    return 0;
}
