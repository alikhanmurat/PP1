
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string x; 
	cin >> x;
    string y = x;
    
    reverse (y.begin(), y.end());
     if(x == y or x.substr(1) == y.substr(0, x.size() - 1)){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}