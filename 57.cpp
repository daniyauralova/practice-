#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c; //28 february
	
	if (a<=30 && (b==4 || b==6 ||b==9 || b==11)){
		cout<<"YES";
	}
	
	if (a<=31 && (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12)){
		cout<<"YES";
	}
	
	if (a<=28 && b==2) cout<<"YES";
	
	else cout<<"NO";
}
