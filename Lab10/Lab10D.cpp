
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool hardsort (vector <int> v1, vector <int> v2){
 ll sum1 = 0;
 ll sum2 = 0;
 for (int i = 0;i < v1.size(); i++){
  sum1 += v1[i];
 }for (int i = 0; i < v2.size(); i++){
  sum2 += v2[i];
 }if (sum1 > sum2){
  return false;
 }else{
  if (sum1 < sum2){
   return true;
  }else{
   if (v1.size() > v2.size()){
    return false;
   }
   else{
    if (v1.size() < v2.size()){
     return true;
    }else{
     for (int i = 0; i < v1.size(); i++){
      if (v1[i] > v2[i]){
       return false;
      }else{
       if (v1[i] < v2[i]){
        return true;
       }
      }
     }
     return true;
    }
   }
  }
 }
}
int main(){
 ll x, y, z;
 cin >> x;
 vector < vector<int> > v1;

 for (int i = 0; i < x; i++){
  cin >> y;
  vector <int> v2;
  
  for (int i = 0; i < y; i++){
   cin >> z;
   v2.push_back(z);
  }
  v1.push_back(v2);
 }
 sort (v1.begin(), v1.end(), hardsort);
 
 for (int i = 0; i < v1.size(); i++){
  for (int j = 0;j < v1[i].size(); j++){
   cout << v1[i][j] << " ";
  }
  cout << endl;
 }

 return 0;
}