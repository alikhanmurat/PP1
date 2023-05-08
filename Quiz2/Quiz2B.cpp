
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() { 
    ll x, y, z, x1, y1, x2, y2, area = 0; 
    cin>> x >> y; 
    int arr[x][y]; 
    for (int i = 0; i < x; i++){ 
        for (int j = 0; j < y; j++){ 
            arr[i][j] = 0; 
        } 
    } 
    cin >> z; 
    for (int i = 0; i < z; i++){ 
        cin >> x1 >> y1 >> x2 >> y2; 
        for (int j = x1; j < x2; j++){ 
            for (int l = y1; l < y2; l++){ 
                arr[j][l] = 1; 
            } 
        } 
    } 
    for (int i = 0; i < x; i++){ 
        area += count(arr[i], arr[i] + y, 0); 
    } 
    cout << area; 
    return 0; 
}