
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int max(int x, int y, int z, int w){
    int max = -1e9, arr[] = {x, y, z, w};
    for(int i = 0; i < 4; i++) 
	if(max < arr[i]) max = arr[i];
    return max;
}

int main(){
    int x, y, z, w; 
	cin >> x >> y >> z >> w;
    cout << max(x, y, z, w);
}