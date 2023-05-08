
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 string x, y, z, w;
 cin >> x;
 y = x;

 w = x.substr(0, x.size() - 1) ;
 
 reverse(w.begin(), w.end());
 reverse(x.begin() , x.end());
 
 if(x != y){
  cout << x.size();
 }
 
 else{
  z = x.substr(0, x.size() - 1) ;
  if(z != w){
   cout << z.size();
  }
  else {
  cout << 0;
 }
}
}