//QUIZ Task B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    
    for(int i = 0; i < 3; i++)
    cin >> arr[i];
    
    sort (arr, arr + 3);
    
    for(int i = 2; i >= 0; i--)
    cout << arr[i] << " ";
    
    return 0;
}
