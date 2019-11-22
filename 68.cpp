#include <iostream> 
#include <cmath> 
using namespace std; 
int main () 
{ 
    int a,b,c; 
    cin>>a>>b>>c; 
    int D; 
    D=sqrt(b*b-4*a*c); 
    int x1; 
    int x2; 
    if(D>0){ 
        x1=(-b+D)/2*a; 
        x2=(-b-D)/2*a; 
        cout<<x1<<" "<<x2; 
    } 
    if(D<0){ 
        cout<<"ERROR"; 
    } 
}
