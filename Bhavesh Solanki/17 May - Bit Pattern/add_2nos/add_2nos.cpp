#include<iostream>

using namespace std;


int main()
{
	int num1, num2,carry=0;
	cout << "enter first Number: " << endl;
	cin >> num1;
	cout << "enter second Number: " << endl;
	cin >> num2;
	while(num2!=0){
		carry = num1 & num2;
		num1 = num1 ^ num2;
		num2 = carry << 1;
	}
	cout<<"sum: "<<num1;
	return 0;
}



