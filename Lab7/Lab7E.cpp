
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(int x){
	if(x == 1){
		return 1;
	}if(x % 2 == 0){
		return check(x / 2);  
	}else{
		return 0;
}
}
int main()
{
    int x;
    cin >> x;
    if(check(x)){
    	cout << "Yes";
	}else{
		cout << "No";
}
return 0;
}
