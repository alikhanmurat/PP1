//Lab5 TASK B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   char str[1000000];
   cin >> str;
   
   for (int i = 0; i < strlen(str); i++)
   cout << (char) toupper (str[i]);
}
