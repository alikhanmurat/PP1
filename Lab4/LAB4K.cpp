//Lab4 TASK N
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x, y;
	cin >> x >> y;
	int arr[x][y];
	int sumx[x], sumy[y];
	for (int i = 0; i < x; i++){
    	for(int j = 0; j < y; j++){
        	cin >> arr[i][j];
    	}
	}
 	for (int i = 0; i < x; i++){
      	sumx[i] = 0;
      	for (int j = 0; j < y; j++){
          	sumx[i] += arr[i][j];
        }
    }
    for (int j = 0; j < y; j++){
        sumy[j] = 0;
  	    for (int i = 0; i < x; i++){
      	    sumy[j] += arr[i][j];
        }
    }
    for (int i = 0; i < x; i++){
   	    cout << "The sum of row number " << i + 1 << " is " << sumx[i] << endl;
    }
    for (int j = 0; j < y; j++){
   	    cout << "The sum of column number " << j + 1 << " is " << sumy[j] << endl;
    }
    return 0;
}
