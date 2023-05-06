//Lab4 TASK N
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
int x, i, j;
cin >> x;

  for (i = 2; i < x; i++){
  for (j = 2; j <= (i/2); j++)
  if (i % j == 0) 
  break;
  if (j > (i/2)) 
  cout << i << " is prime\n";

}
 return 0;
}
