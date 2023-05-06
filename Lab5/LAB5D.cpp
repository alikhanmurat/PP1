
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int i, flag = 0;
	char str[1000000];
	cin >> str;
	
	for (i = 0; i < strlen(str); i++){
	     if (str[i] != str[strlen(str) - i - 1]){
		      flag = 1;
              break;
	         }
        }	
	if (flag){
	cout << "NO";
	}else{
	cout << "YES";
}
return 0;
}
