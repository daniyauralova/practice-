#include <iostream>
using namespace std;

int main()
{
	for (int n=100; n<=999; n++){
		int c=n%10;
		int b=((n%100)-c)/10;
		int a= n/100;
		if (n==c*c*c+b*b*b+a*a*a) cout<<a<<b<<c<<" ";
	}
}
