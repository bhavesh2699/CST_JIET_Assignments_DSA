#include <iostream>
using namespace std;

int hcf(int a, int b) {
	if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}
int main() {
    int b, a, result;
    cout<<"Enter 1st number: "<<endl;
    cin>>a;
    cout<<"Enter 2nd number: "<<endl;
    cin>>b;
    result = hcf(a, b);
    cout<<"gcd of "<<a<<" & b "<<b<<" is: "<<result<<endl; 
    return 0;
}


