//Quiz TASK P
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y <= z or x + z <= y or y + z <= x)
    
    {
      cout << "Invalid";
  }
  else 
  {
    cout << "Valid";
  }
    return 0;
}

