
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll x;
	cin >> x;
	queue <string> q;
	
	for(int i = 1; i <= x; i++){
		ll y;
		cin >> y;
		if(y == 1){
			string z;
			cin >> z;
			q.push(z);
			cout << q.front() <<endl;
		}else if (y == 2){
			q.pop();
			if (q.empty()){
				cout << "queue is empty" << endl;
			}
		
		}
	}
return 0;
}