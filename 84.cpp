# include <iostream>
using namespace std;
int main ()
{
	char a[100][100];
	double n;
	cin >> n;
	for(double i = 1; i <= 100; i++)
	{
		cout << i << "$ - " << i * n << "p - " << i * n / 20 << "kg" << endl; 
	}
	return 0;
}

