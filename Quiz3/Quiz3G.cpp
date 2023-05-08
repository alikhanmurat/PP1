
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	string x;
    getline(cin, x);
    int y;
    cin >> y;
    char arr[y];
    
	for (int i = 0; i < y; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + y);
    for (int i = 0; i < y; i++){
        int cnt = 0;
        for(int j = 0; j < x.size(); j++){
            if(arr[i] == x[j])
            cnt++;
        }
        cout << arr[i] << " - " << cnt << endl;
        
    }
}
