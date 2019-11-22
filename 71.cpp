#include <iostream> 
#include <cmath> 
using namespace std; 
int main () 
{ 
int h,m; 
cin>>h>>m; 
double angle; 
angle=(h+(m/60))*30-m*6; 
cout<<angle; 
return 0; 
}
