
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 bool check = true;
    int x;
    cin >> x;
    ll arr[x][x];
    
    for (int i = 0; i < x; i++){
     for (int j = 0; j < x; j++){
      cin >>arr[i][j];
  }
 }
 for (int i = 0; i < x; i++){
     for (int j = 0; j < x; j++){
      if (arr[i][j] != arr[j][i]){
       check =false;
       break;
       }
  }
  if(check == false)
  break;
 }
 
 if (check == true) 
 cout << "Perfect.";
 else 
 cout<< "Not perfect.";
return 0;
}