//QUIZ Task N
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    if((x + y > z) && (x + z > y) && (z + y > x))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
