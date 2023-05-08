
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll x;
    cin >> x;
    string y;
    for (int i = 0; i < x; i++)
    {
        cin >> y;
        if (y.find("@gmail.com") != string::npos)
        cout << y.substr (0, y.size() - 10) << endl;
    }
    return 0;
}