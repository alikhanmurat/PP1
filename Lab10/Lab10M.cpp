
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	
    ll x, y, z;
    cin >> x >> y;
    vector <int> v1, v2;
    
	for (int i = 0; i < x; i++){
    cin >> z;
    v1.push_back(z);
}
    for (int i = 0; i < y; i++){
    cin >> z;
    v2.push_back(z);
}

    vector<int>::iterator it;
    vector<int>::iterator ti;

    it = unique (v1.begin(), v1.end());
    v1.resize (distance (v1.begin(), it));
    ti = unique (v2.begin(), v2.end());
    v2.resize (distance (v2.begin(), ti));
    ll w= v1.size() + v2.size();
    vector <int> v3(w);
    
	for (int i = 0; i < w; i += 2){
    v3[i] = v1[i / 2];
    }for (int i = 1; i < w; i+=2){
    v3[i] = v2[i / 2];
	}

    vector <int> ::iterator id = unique (v3.begin(), v3.end());
    v3.resize (distance (v3.begin(), id));
    
	for (id = v3.begin(); id != v3.end(); id++){
    cout<< *id << " ";
}
return 0;
}