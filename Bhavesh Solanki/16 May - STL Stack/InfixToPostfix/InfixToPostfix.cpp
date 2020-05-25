#include<iostream>
#include<math.h>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string input;
	int x,i=0,a,b,r;
	stack<int> pf;
	
	cout<<"Please enter the postfix expression: "<<endl;
	cin>>input;
	
	while(input[i]!='\0')
	{
		if(input[i] >='0' && input[i] <='9')
		{
			x=input[i]-48; //for converting character into integer using ASCII codes(0-9:48-57)
			pf.push(x);
		}
		else if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/')
		{
			a=pf.top();//top element of stack will be inserted in a from stack
			pf.pop();
			b=pf.top();//top element of stack will be inserted in a from stack(acc. to algorithm)
			pf.pop();
			
		switch(input[i])
			{
				case '+':
					r=a+b;
					pf.push(r);
					break;
				case '-':
					r=a-b;
					pf.push(r);
					break;
				case '*':
					r=a*b;
					pf.push(r);
					break;
				case '/':
					r=a/b;
					pf.push(r);
					break;
			}
		}
		i++;
	}
	cout<<"result of given expression ="<<abs(pf.top())<<endl;
	return 0;
}
