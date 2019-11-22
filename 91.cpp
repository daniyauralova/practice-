#include <iostream>
using namespace std;

int main()
{
	double sum=0.0;
	
	for (int i=2; i<=9; i++){
		sum+=((double)(i))/((double)(i+1));
	}
	cout<<sum;
}
