
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int remove (vector <int> & v){
	vector <int> ::iterator it;
	vector <int> ::iterator ti = v.end();
    for (it = v.begin(); it != ti; ++it) {
        ti = remove(it + 1, ti, *it);
    }

    v.erase(ti, v.end());
}
 
int main(){
	int x;
	cin >> x;
	vector <int> v(x);
	for(int i = 0; i < x; i++)
	{
		cin >>v[i];
	}
    remove(v);
	do {
        for(int i = 0; i < v.size(); i++){
         cout << v[i] << " ";
		 }
         cout << endl;
    } while(next_permutation(v.begin(), v.end()));
return 0;
}