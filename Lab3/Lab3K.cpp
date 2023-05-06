//LAB3 Task K
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll x;
	cin>>x; 
	ll a[x];
    for(int i = 0; i < x; i++)
	    cin>>a[i];
	    
    cout<< a[0] <<" ";
    for(int i = 1; i < x; i++)
    {
        if(a[i] == a[i - 1])
            continue;
        cout<< a[i] <<" ";
    }
    
	return 0;
}
