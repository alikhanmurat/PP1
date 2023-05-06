
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
	cin >> x;
	stack <int> s;
	
	for (int i = 0; i < x.size(); i++){
		if (s.empty()){
			s.push (x[i] - 48);
			}else{
		    ll y, z;
			y = s.top() * 10 + (x[i] - 48);
			z = sqrt(y);
			if(z * z == y){
				s.pop();
			}else{
				s.push(x[i] - 48);
			}
		}
}
	if (s.empty()){
	cout << "Stack is empty";
	}else{
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
}
    return 0;
}

