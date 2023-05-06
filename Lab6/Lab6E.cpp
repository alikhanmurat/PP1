
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void hyp(double x, double y){
	double z = hypot(x ,y);
	cout << setprecision(4) << z;
}
int main(){
	double x, y;
	cin >> x >> y;
	hyp(x, y);
return 0;
}
