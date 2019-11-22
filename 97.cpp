#include <iostream> 
#include <conio.h> 
using namespace std; 
  
int main() 
{ 
    int i,j,n,sum,mult; 
        cin>>n; 
        sum = 0; 
        for(i = 1; i <= n; i++) 
        { 
            mult = 1; 
            for(j = i; j < i + (i + 1); j++) 
            { 
                cout<<j; 
                if(j < i + (i + 1) - 1) 
                    cout<<"*"; 
                else 
                    if(i < n) 
                        cout<<" + "; 
                    else 
                        cout<<"\r\n"; 
                mult *= j; 
            } 
            sum += mult; 
        } 
    cout<<sum; 
     
    return 0; 
}

