#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	cin>>x;
	
	cout<<pow((2.71828), (x-2))+abs(sin(x))-pow(x, 4)*cos(1/x);
}
