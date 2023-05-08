
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool truth(string x) { 
    bool check = false; 
    for (int i = 0; i < x.size(); i++){ 
        if (x[i] >= '0' && x[i] <= '9'){ 
            return false; 
        } 
    } 
    return true; 
} 
 
int main() { 
    string x; 
    getline(cin, x); 
    string y = " "; 
    for (int i = 0; i < x.size(); i++){ 
        if (x[i] == ' '){ 
            if (truth(y)){ 
                cout << y << endl; 
            } 
            y = ""; 
        } 
        else{ 
            y+= x[i]; 
        } 
    } 
    if (truth(y)){ 
        cout << y << endl; 
    } 
}