//Quiz1 TASK D
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int x;
    cin >> x;
    for (int i = 2; i <= x; i++){
	if (x % i == 0){
      cout << i;
    break;
  }
  }
    return 0;
}
