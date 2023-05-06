
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string x; 
	cin >> x;
    set <int> s;
    
    for(int i = 0; i < x.size(); i++){
        s.insert(tolower(x[i]));
    }
    cout << s.size() << endl;
    
    set<int> :: iterator it;
    
    for(it = s.begin(); it != s.end(); it++){
        cout << (char)*it << " ";
    }

}