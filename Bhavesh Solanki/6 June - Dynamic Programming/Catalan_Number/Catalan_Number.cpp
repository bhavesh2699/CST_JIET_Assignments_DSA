/*
FORMULA: (2n)!/((n+1)!*n!)
*/
#include<iostream>
using namespace std;

int cat_number(int n){
 int i,j,arr[n],k;
 arr[0] = 1;
 for(i = 1; i < n; i++){
 arr[i] = 0;
 for(j = 0,k = i - 1; j < i; j++,k--)
 arr[i] += arr[j] * arr[k];
 }
 return arr[n-1];
}

int main(){
 int ans, n = 7;
 ans = cat_number(n);
 cout<<"catalan number N = "<<n<<" is: "<<ans;
 return 0;
}
