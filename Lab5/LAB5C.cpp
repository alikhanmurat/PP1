//Lab5 TASK C
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int main(){ 
   string x, y; 
   cin >> x >> y;

    for(int i = 0; i < x.size(); i++){
        int cnt = 0;
        if(y[0] == x[i]){
            for(int j = 0; j < y.size(); j++){
                if (x[j + i] == y[j]) 
				cnt++;
            }
        }
        if(cnt == y.size()){
            cout << "YES";
            return 0;
        }
    }
        cout << "NO";
    
}