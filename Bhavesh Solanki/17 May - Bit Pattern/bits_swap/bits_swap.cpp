#include<iostream>

using namespace std;
#define even 0xaa  //aaa... means 1010 1010 1010
#define odd 0x55 //555... means 0101 0101 0101 


int main()
{
	int n;
	cout << "enter Number: " << endl;
	cin >> n;
	cout << "After swaping: " << (((n & even )>> 1) | ((n & odd) << 1)) << endl;	

	
	return 0;
}



