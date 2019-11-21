#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a=n%10;
	int b=((n%100)-a)/10;
	int c=((n%1000)-(b*10+a))/100;
	int d=n/1000;
	
	if (a==d && b==c) cout<<"YES";
	else cout<<"NO";
}
