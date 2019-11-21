#include <iostream>
using namespace std;

int main()
{
	double candy, cookie;
	cin>>candy>>cookie;
	
	cout<<"PRICE OF 1KG CANDIES - "<<candy<<endl;
	cout<<"PRICE OF 1KG COOKIES - "<<cookie<<endl;
	
	cout<<"300G CANDIES - "<<(300*candy)/1000<<endl;
	cout<<"400G COOKIES - "<<(400*cookie)/1000<<endl;
	cout<<"SUM - "<<(300*candy)/1000 + (400*cookie)/1000<<endl;
	
	
	cout<<"PRICE OF 1800G OF CANDIES - "<<(1800*candy)/1000<<endl;
	cout<<"PRICE OF 2000G OF COOKIES - "<<(2000*cookie)/1000<<endl;
	cout<<"SUM OF THREE PURCHASES - "<<3*((1800*candy)/1000 + (2000*cookie)/1000);
}
