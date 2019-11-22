#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum=0.0;
	
	for (int i=3; i<=111; i+=2){
		sum+=cos( ((double)(i)) / ((double)(i+2)) );
	}
	cout<<sum;
}
