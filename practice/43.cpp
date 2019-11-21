#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a;
   cin>>a;
   if  (a>=1 && a<=2  ) {cout<<"zima";};
  else  if  (a>=3 && a<=5) {cout<<"vesna";};
  else if  (a>=6 && a<=8) {cout<<"leto";};
  else if  (a>=9 && a<=11) {cout<<"osen'";};
  else if (a==12) {cout<<"zima";};
    return 0;
}

