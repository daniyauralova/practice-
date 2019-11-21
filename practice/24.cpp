#include <iostream>
using namespace std;

int main()
{
	int days, per, sum;
	cin>>days>>per>>sum;
	
	cout<<sum*(days-1)*(per/100);
}
