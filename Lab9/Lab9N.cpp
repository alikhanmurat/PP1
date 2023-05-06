
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x, cnt = 0;
	cin >> x;
	int arr[x];
	map <int,int> m;
	
	for(int i = 0; i < x; i++){
		cin >>arr[i];
		m[arr[i]]++;
	}
	
	for(int i = 0; i < x; i++){
		for(int j = i + 1; j < x; j++){
			if (m[arr[i] ^ arr[j]] > 0)
			cnt++;
		}
	}
	cout << cnt;
return 0;
}
