#include <iostream>
using namespace std;

int main()
{
	for (int n=1000; n<=9999; n++){
		int d=n%10;
		int c=((n%100)-d)/10;
		int b=((n%1000)-(c*10+d))/100;
		int a=n/1000;
		
		if (n==(a+b+c+d)*600) cout<<a<<b<<c<<d<<" ";
	}
}
