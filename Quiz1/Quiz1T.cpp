//QUIZ Task T
#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, c=0;
	cin >> x;
	int a[x];
	for ( int i=0; i<x; i++ ){
		cin >> a[i];
	}
	for ( int j=0; j<x; j++ ){ 
		c=0;
		for ( int number = a[j]; number > 0; number /= 10 ){
			c = c + (number % 10);
		}
		if ( c % 2 == 0 ) cout << "Sum of digits is even!" << endl;
		else cout << "Sum of digits is odd!" << endl;
	}
	return 0;
}