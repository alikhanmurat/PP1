
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	cin >> x;
	stack <char> s;
	
	for (int i = x.size() - 1; i >= 0; i--){
		if (s.empty()){
			s.push(x[i]);
			}else if (s.top() == '1' && x[i] == '1'){
				s.pop();
			} 
			else{
				s.push(x[i]);
			}
		}

	while (!s.empty()){
		cout << s.top();
		s.pop();
	}
return 0;
}
