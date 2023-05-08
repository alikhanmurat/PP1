//Quiz Task C
#include <bits/stdc++.h>
using namespace std;
int main() {
   int x, y, z, w;
   cin >> x >> y >> z >> w;
   if (x >= z){
     y += x - z;
   if(y >= w)
       cout << "Yes";
     else 
       cout << "No";
   }
   
   return 0;
}