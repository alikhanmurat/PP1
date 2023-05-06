
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool ispalindrome(vector <int> v){
    for(int i = 0; i < v.size() / 2;i++ ){
        if(v[i] != v[v.size() - 1 - i]){
            return false;
        }
    }
    return true;
}
int main(){
	ll x;
	cin >> x;
    vector <int> v(x);

    for(int i = 0; i < x; i++){
        cin >> v[i];
    }
    sort (v.begin(), v.end());
    
	do{
        if(ispalindrome(v)){
            for(int i = 0; i < v.size(); i++){
                cout<< v[i] << " ";
            }
        return 0;
        }
    }while (next_permutation (v.begin(), v.end()));
    cout<< "Impossible" << endl;
return 0;
}