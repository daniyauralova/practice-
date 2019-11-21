#include <iostream>
using namespace std;
int main()
{
	int d1, m1, y1, d2, m2, y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	
	if (y1>y2) cout<<"NO";
	if (y2>y1) cout<<"YES";
	if (y1==y2) {
		if (m1>m2) cout<<"NO";
		if (m2>m1) cout<<"YES";
		if (m1==m2) {
			if (d1>d2) cout<<"NO";
			if (d2>d1) cout<<"YES";
			if (d1==d2) cout<<"NOTHING";
		}
	}
	
}
