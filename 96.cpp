#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cin>>x>>n;
	double sum=0.0;
	
	for (int i=1; i<=n; i++){
		sum+=(1/((double)(cos(pow(x, i)))));
	}
	cout<<sum;
}
