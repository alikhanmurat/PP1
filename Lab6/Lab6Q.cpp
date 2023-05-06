#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double percentage(double a, double b){
	return 100 / a * b;
}
int main(){
	double x, y;
	cin >> x >> y;
	cout << percentage(x, y); 
return 0;
}

//Not duplicate of another run