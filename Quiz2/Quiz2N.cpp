
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{ 
    int x, y = 0, j; 
    cin >> x; 
    int arr[x]; 
    for (int i = 0; i < x; i++) { 
        cin >> arr[i]; 
    } 
    
    for (int i = 0; i < x; i++){ 
        while (arr[i] % 10 == 0){ 
            arr[i] /= 10; 
        } 
    } 
    
    for (int i = 0; i < x / 2; i++){ 
        while (arr[i] != 0){ 
            y = y * 10 + (arr[i] % 10); 
            arr[i] /= 10; 
        } 
        arr[i] = y; 
        y = 0; 
    } 
    for (int i = 0; i < x / 2; i++) { 
        if (arr[i] != arr[x - i - 1]){ 
            cout << "NO"; 
            return 0; 
        } 
    } 
    cout << "YES"; 
}