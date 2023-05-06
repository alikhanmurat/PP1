//Lab4 TASK F
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x;
	cin >> x;
    int arr[x][x];
    int max, position1, position2;
  
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
        	cin >> arr[i][j];
        }
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
			if(max < arr[i][j]){
                max = arr[i][j];
                position1 = i;
                position2 = j;
        }
    }
}
    cout << position1 + 1 << ' ' << position2 + 1;
    return 0;
}
