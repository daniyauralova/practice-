#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	
	int a=n/100;
	int b=((n%100)-(n%10));
	
	int c=m/100;
	int d=((m%100)-(m%10))/10;
	
	cout<<a*1000+b*10+c*10+d;
}
