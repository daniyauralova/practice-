#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a=n/1000; //1st number 
	int b=n%10; //4th number
	int c=((n%100)-b)/10; //3rd number
	int d=((n%1000)-(c*10+b))/100; //2nd number
	
	cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;
	
	if (a==b) cout<<a<<" ";
	if (a==c) cout<<a<<" ";
	if (a==d) cout<<a<<" ";
	if (b==c) cout<<b<<" ";
	if (b==d) cout<<b<<" ";
	if (c==d) cout<<c<<" ";
	if (a==b && b==c) cout<<a<<" ";
	if (a==b && b==d) cout<<a<<" ";
	if (a==c && c==d) cout<<a<<" ";
	if (b==c && c==d) cout<<b<<" ";

}
