#include <iostream>
using namespace std;

int main()
{
	for (int n=10000; n<=99999; n++){
		int e=n%10;
		int a=n/10000;
		int d=((n%100)-e)/10;
		int c=((n%1000)-(d*10+e))/100;
		int b=((n%10000)-(c*100+d*10+e))/1000;
		
		if ((e%2==0 || e==0) && c%2!=0 && c%4!=0 && c%8!=0 && (a+b+c+d+e)%4==0){
			cout<<a<<b<<c<<d<<e<<" ";
		}
	}
}
