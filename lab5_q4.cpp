#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<  "what is the number? ";
	cin >> a;
	if (a%5==0 && a%11==0 ){
	cout << a << " is divisble by 5 and 11";
	}
	else {
 	cout << a << " is not divisible by 5 and 11";

	}				

} 
