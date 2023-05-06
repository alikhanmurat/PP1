//LAB3 Task J
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    int x, y; 
	cin >> x >>y; 
	int a[x]; 
	bool flag = false;
    for(int i = 0; i < x; i++)
        cin>>a[i];
    for(int i = 0; i < x; i++)
    {
        if(a[i] == y)
        {
            cout<<i + 1;
            flag = true;
            break;
        }
        else if(y < a[i])
        {
            cout << i;
            flag = true;
            break;
        }
    }
    if( !flag)
        cout << x;
    return 0;
}