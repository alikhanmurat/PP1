//Lab4 TASK A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x;
	cin >> x;
    int arr[x][x];
    int max=0;
  
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
        	cin >> arr[i][j];
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }
    cout << max;
    return 0;
}
