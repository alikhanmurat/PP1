//Lab4 TASK B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x;
	cin >> x;
    int arr[x][x];
  
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
        	cin >> arr[i][j];
}
}
    int firstmax = arr[0][0];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
	        if(firstmax < arr[i][j])
                firstmax = arr[i][j];
}
}
    int secondmax = arr[0][0];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
        if(secondmax < arr[i][j] && firstmax > arr[i][j]){
                secondmax = arr[i][j];
                }if (firstmax == secondmax){
                	cout << "0";
				}else 
				cout << secondmax;
        
    return 0;
}
