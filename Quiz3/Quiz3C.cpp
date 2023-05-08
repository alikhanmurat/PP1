
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(int a, int b){
     while (b > 0) { 
        a %= b; 
        swap (a, b); 
    } 
    return a; 
} 
 
int main() { 
    int x; 
    cin >> x; 
    int arr[x]; 
    for (int i = 0; i < x; i++){ 
        cin >> arr[i]; 
    } 
    int y = -1; 
    for (int i = 0; i < x; i++){ 
        for (int j = i + 1; j < x; j++){ 
            if (gcd(arr[i], arr[j]) > y){ 
                y = gcd(arr[i], arr[j]); 
            } 
        } 
    } 
    cout << y << endl;
}