
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    string x;
    char y;
    vector <int> v;
    cin >> x >> y;
    for (int i = 0; i < x.length(); i++){
        if (x[i] == y){
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() == 1){
        cout << v[0];
    }
    else{
        cout << v[0] << " " << v[v.size() - 1];
    }
}