#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, n;
	cin>>a>>n;
	double product=1.0;
	
	for (int i=1; i<=n; i++){
		product*=((double)((pow((a+i), 2))));
	}
	cout<<product;
}
