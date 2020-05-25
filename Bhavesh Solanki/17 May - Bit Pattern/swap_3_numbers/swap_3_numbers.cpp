#include<iostream>

using namespace std;

int main()
{
	int x=0,y=0,z=0;
	cout<<"x: ";
	cin>>x;
	
	cout<<"Y: ";
	cin>>y;
	
	cout<<"Z: ";
	cin>>z;
	
	x = x^y^z;
	y = x^y^z;
	z = x^y^z;
	x = x^y^z;	
	
	cout<<"After swap: X= "<< x<< " Y= " << y << " Z= " << z <<endl;	
	
	
	return 0;
}
