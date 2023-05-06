#include <iostream>
using namespace std;

int main(){
	int x, y;
	int sum;
	cin >> x;
	cin >> y;
	int z, w;
	z = y % 10;
	w = y;
	for(w = y; w >= 10; w = w / 10);
	sum = x + z + w;
	cout << "" << sum;
	
	return 0;
}