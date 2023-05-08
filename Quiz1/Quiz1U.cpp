//QUIZ Task U
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    double x, y;
    int cnt = 1;
    cin >> x >> y;
    while (x < y)
    {
        x += x * 0.1;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
    