#include <iostream> 
#include <cmath> 
using namespace std; 
int main () 
{ 
    int x1,y1,x2,y2,x3,y3; 
    cin>>x1>>y1>>x2>>y2>>x3>>y3; 
    int e1,e2; 
    int x4,y4; 
    e1=(x1+x3)/2; 
    e2=(y1+y3)/2; 
    cout<<e1<<" "<<e2<<endl; 
    x4=2*e1-x2; 
    y4=2*e2-y2; 
    cout<<"D"<<'('<<x4<<';'<<y4<<')'; 
    return 0; 
}
