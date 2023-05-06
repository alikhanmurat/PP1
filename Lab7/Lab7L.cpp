
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int i = 0;
int check(string x, int i, int j)
{
	if(i == x.size() / 2){
		return 1;
	}if(x[i] != x[j - 1]){
		return 0;
	}if(x[i] == x[j - 1]){
		return check(x, i + 1, j - 1);
	}
	
	
}
int main(){
    string x;
    cin >> x;
    int j;
    j = x.size();
    if(check(x, i, j)) 
	cout << "Yes";
    else 
	cout << "No";
return 0;
}

