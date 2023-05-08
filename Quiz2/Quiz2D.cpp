
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int cnt[1001]; 
 
int main(){ 
  
 int X = 1001; 
 int x; 
 cin >> x; 
  
 for (int i = 0; i < x; i++){ 
  int y; 
  cin >> y; 
  cnt[y]++; 
 } 
  
 int mx = -1e5; 
 for (int i = 0; i < X; i++){ 
  mx = max(mx, cnt[i]); 
 } 
  
 for (int i = X - 1; i >= 0; i--){ 
  if(mx == cnt[i]) 
  cout << i << " "; 
 }  
}