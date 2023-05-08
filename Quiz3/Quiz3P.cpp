
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string strToBool(string x){
    if (x == "1"){
        return "true";
    }
    else if (x == "0"){
        return "false";
    }
    else{
        return x;
    }
}
int main(){
    string x;
    cin >> x;
    cout << strToBool(x);
}