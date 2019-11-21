#include <iostream>
using namespace std;
int main()
{
	int week, month, year;
	cin>>week>>month>>year;
	
	cout<<week*7+month*30+year*360;
}
