
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 string x; 
 cin >> x;

    for(int i = 0; i < x.size() - 1; i++){
        if(x[i] > x[i + 1]){
          cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}