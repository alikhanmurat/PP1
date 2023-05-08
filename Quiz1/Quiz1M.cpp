//QUIZ Task M
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	int x, y, z, sum = 0; 
cin >> x >> y >> z; 
for (int i = 0, j = 0; j < x; i += z){ 
    cout << y + i << " "; 
    j++; 
    sum =sum + y +i; 
} 
cout << endl << "sum: " << sum;
	return 0;
}
