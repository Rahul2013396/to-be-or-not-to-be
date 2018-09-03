//including the library
#include <iostream>
using namespace std;
//writing the function
int main(){
  //declaring variables
int a,b,c;
  //taking the input
cout << "what are the numbers ";
cin >> a>>b>>c;
  // putting the conditions(multiple conditions)
if (a> b && a>c){
cout << a << " is the largest number";}
else if (b>c && b>a){
cout<< b << " is the largest number";
}
else {
cout << c << " is the largest number";
}

} 
