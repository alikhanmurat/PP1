
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int counting(int arr1[], int arr2[], int x){
    int cnt = 0, y = x;
    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(arr1[i] == arr2[j]){
                arr2[j] = arr2[y - 1];
                y--;
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main(){
    int x; 
	cin >> x;
    int arr1[x], arr2[x];

    for(int i = 0; i < x; i++) 
	cin >> arr1[i];
    for(int i = 0; i < x; i++) 
	cin >> arr2[i];
    cout << counting(arr1, arr2, x);
}