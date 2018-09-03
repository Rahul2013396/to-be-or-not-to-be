//including the library
#include<iostream>
using namespace std;
//function
int main (){
	//declaring the variables
	int a=0 ,n, b =1;
	cout << " what is n? ";
	cin >> n;
	//starting the loops
	while (b<=n){	
	a=a+b;
	b++;	
	}
	cout<<a;
	return 0;
}
