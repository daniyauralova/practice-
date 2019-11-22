#include <iostream> 
#include <cmath> 
using namespace std; 
int main () 
{ 
    int a,b,c; 
    cin>>a>>b>>c; 
    int perimeter,area; 
    int p; 
    if(a+b>c && a+c>b && c+b>a){ 
        cout<<"YES"<<endl; 
        perimeter=a+b+c; 
        p=perimeter/2; 
        area=sqrt(p*(p-a)*(p-b)*(p-c)); 
        cout<<perimeter<<endl<<area; 
    } 
}
