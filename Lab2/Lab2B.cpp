#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	
	if (x >= 6, x <= 20){
		cout << "Super";
	} else if (x > 20, x % 2 == 0){
		cout << "Not Super";
	} else {
		cout << "Super";
	}
	return 0;
}