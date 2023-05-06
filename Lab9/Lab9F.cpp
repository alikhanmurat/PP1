
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	cin >> x;
	stack <int> s;
	
	for (int i = 0; i < x.size(); i++){
		if (s.empty()){
			if (x[i] == ')'){
				cout << "NO";
				return 0;
			}
			s.push(x[i]);
		}else if (s.top() != x[i]){
			s.pop();
		}else{
			s.push(x[i]);
		} 
	}
	if (s.empty()){
		cout << "YES";
	}else
	cout << "NO";
return 0;
}
