
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	
    double x, att1, att2, final, cred, gpa, totalcred = 0, total = 0, sum = 0, y = 3; 
    cin >> x;
 
    for (int i = 0; i < x; i++){
    	
        cin >> att1 >> att2 >> final >> cred;
        totalcred += cred;
        if (att1 + att2 > 29 && final > 19){
        total = (att1 + att2 + final);
        if (total >=95) gpa = 4;
        if (total >= 90 && total < 95) gpa = 11 / y;
        if (total >=85 && total < 90) gpa = 10 / y;
        if (total >=80 && total < 85) gpa = 9 / y;
        if (total >=75 && total < 80) gpa = 8 / y;
        if (total >=70 && total < 75) gpa = 7 / y;
        if (total >=65 && total < 70) gpa = 6 / y;
        if (total >=60 && total < 65) gpa = 5 / y;
        if (total >=55 && total < 60) gpa = 4 / y;
        if (total >=50 && total < 55) gpa = 1;
        if (total < 50) gpa = 0; 
        sum += gpa * cred;
  }  
 }  
 cout << sum / totalcred;
return 0;
}
