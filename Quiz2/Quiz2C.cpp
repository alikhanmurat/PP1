
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	ll arr[x];
	
for (int i = 0; i < x; i++){
  cin >> arr[i];
  if (arr[i] % 2 == 0){
    cout << arr[i] << ' ';
  }
}for (int i = 0; i < x; i++){
if (arr[i] % 2 != 0){
    cout << arr[i] << ' ';
  }
}
return 0;
}