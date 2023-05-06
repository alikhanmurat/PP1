//Lab4 Task C
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x, y, cnt = 0, z = 0, w = 0;
	cin >> x >> y;
	int arr[x][y];
	
	 for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        	cin >> arr[i][j];
        	if (arr[i][j] < 0)
        	cnt += 1;
        }
    }
cout << cnt;
        	
return 0;
}
