#include <iostream>
using namespace std ;
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a+b>b+c &&a+b>a+c) cout<<a+b ;
	else if (b+c>a+c && b+c>b+a) cout<<b+c;
	else if (a+c>b+c &&a+c >c+b) cout<<a+c;
return 0;
}
