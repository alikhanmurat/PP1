#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  
  x = sqrt(x);
  for (int i = 1; i <= x; i++) { 
	cout << i * i << endl;
  }
  return 0;
}
