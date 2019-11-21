#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 if (a>b||a>c||d<a )
 { if ( a%2==0){
     cout<<a;}
     }
     else if (a<b||b>c||d<b )
 { if ( b%2==0){
     cout<<b;}
     }
     else if (a<c||b<c||d<c )
 { if ( c%2==0){
     cout<<c;}
     }
     else if (a<d||c<d||d>b )
 { if ( d%2==0){
     cout<<d;}
     }
     else cout<<"not found";


 
   
    return 0;
}

