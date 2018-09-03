//inclufing the library
#include <iostream>
using namespace std;
//function
int main(){
	//declaring the variables
	int a;
	cout<<  "what is the number? ";
	cin >> a;
	//putting the conditions
	if (a%5==0 && a%11==0 ){
	cout << a << " is divisble by 5 and 11";
	}
	else {
		//result
 	cout << a << " is not divisible by 5 and 11";

	}				

} 
