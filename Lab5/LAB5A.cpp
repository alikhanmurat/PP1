//Lab5 TASK A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   char str[999999];
   cin >> str;
   int upper = 0, lower = 0;
   for (int i = 0; i < strlen(str); i++){
   if(str[i] >= 'A' && str[i] <= 'Z'){
   	upper++;
   }else if(str[i] >= 'a' && str[i] <= 'z'){
   	lower++;
   }
   }cout << lower << ' ' << upper;
}