#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	
	int a=n/100; 
	int b=n%10;
	int c=((n%100)-b)/10;
	
	int d=m/100;
	int e=m%10;
	int f=((m%100)-e)/10;
	
	cout<<a*100000+c*10000+b*1000+d*100+f*10+e;
	cout<<endl<<"or"<<" "<<n<<m;
}
