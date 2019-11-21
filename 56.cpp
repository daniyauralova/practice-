#include <iostream> 
using namespace std; 
int main () 
{ 
int n; 
cout<<"The direction:"; 
cin>>n; 
switch(n){ 
    case 11: 
    cout<<"North"<<endl; 
    break; 
    case 12: 
    cout<<"WEST"<<endl; 
    break; 
    case 13: 
    cout<<"SOUTH"<<endl; 
    break; 
    case 14: 
    cout<<"EAST"<<endl; 
    break; 
} 
int m; 
cout<<"The next operation:"; 
cin>>m; 
switch(m){ 
    case 0: 
    cout<<"Continue to move"; 
    break; 
    case 1: 
    cout<<"Turn to right"; 
    break; 
    case -1: 
    cout<<"Turn to left"; 
    break; 
} 
}
