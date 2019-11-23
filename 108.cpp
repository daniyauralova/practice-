#include <iostream>
using namespace std;

int main()
{
	int rows;
	cin>>rows;
	
	for (int i=1; i<=rows; i++){
		for (int space=i; space>=rows; space++){
			cout<<" ";
		}
		for (int k=1; k<=i; k++){
			cout<<"*";	
		}
		cout<<endl;
	}
}
