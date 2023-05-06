//Lab4 TASK L
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int x, y;
    cin >> x >> y;
    int arr[x][y];
    for(int i = 0 ; i < x ; i++)
  {
    for(int j = 0; j < y; j++)
    {
    cin >> arr[i][j];
    }
  }
    cout << "coordinates of min elements:" << endl;
    int z = 1 , w = 1 , min = arr[0][0];
    long long sum = 0;
    for(int j = 0 ; j < y ; j++)
  {
    min = arr[0][j];
    for(int i = 0 ; i < x ; i++)
    {
      if(min > arr[i][j])
      {
        min = arr[i][j];
        z = i + 1;
        w = j + 1;
      }
    }
    cout << z << ";" << w << endl;
    sum += min;
  }
  cout << endl << "Their sum:" << endl << sum;
return 0;
}
