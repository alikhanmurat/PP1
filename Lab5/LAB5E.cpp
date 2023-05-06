
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string x; 
	cin >> x;
    int odd = 0, even = 0;
    for(int i = 0; i < x.size(); i++){
        if(i % 2 == 0) 
		even += x[i];
        else 
		odd += x[i];
    }
    if(even == odd) 
	cout << "YES";
    else 
	cout << "NO";
}

