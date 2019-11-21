#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a=n/10000; //the 1st 
	int b=n%10; //the 5th
	int c=((n%100)-b)/10; //the 4th
	int d= ((n%1000)-(c*10+b))/100; //the 3rd
	int e=((n%10000)-(d*100+c*10+b))/1000; //the 2nd
	
	if (a%2==0) a=0;
	if (b%2==0) b=0;
	if (c%2==0) c=0;
	if (d%2==0) d=0;
	if (e%2==0) e=0;
	
	cout<<a<<e<<d<<c<<b;
}
