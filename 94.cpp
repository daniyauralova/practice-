#include <iostream>
using namespace std;

int main()
{
	double sum=0.0;
	int n;
	cin>>n;
	
	for (int i=1; i<=n; i++){
		sum+=1/((double)i);
	}
	cout<<sum;
}
