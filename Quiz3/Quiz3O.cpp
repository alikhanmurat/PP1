
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string x;
    cin >> x;
    char y;
    ll cnt = 1, max = 0;
    
	if(x.size() == 1)
    {
        cout << x << ' ' << 1;
        return 0;
    }
    
    for(int i = 0; i < x.size() - 1; i++)
    {
        if(x[i] == x[i + 1])
        {
            cnt += 1;
        }
        else
        {
            if(cnt > max)
            {
                y = x[i];
                max = cnt;
            }
            cnt = 1;
        }
    }
    if(x[x.size() - 1] == x[x.size()-2])
    {
        if(cnt > max)
        {
            cout << x[x.size() - 1] << ' ' << cnt;
            return 0;
        }
    }
    cout << y << ' ' << max;
}