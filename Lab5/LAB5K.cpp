
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string x, y = "aeiou"; 
	cin >> x;
    int cnt = 0;

    for(int i = 0; i < x.size(); i++){
        for(int j = 0; j < y.size(); j++){
            if(x[i] == y[j]) 
			cnt++;
        }
    }
    cout << cnt;

return 0;
}
