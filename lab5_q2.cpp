#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout << "what are the numbers ";
cin >> a>>b>>c;
if (a> b && a>c){
cout << a << " is the largest number";}
else if (b>c && b>a){
cout<< b << " is the largest number";
}
else {
cout << c << " is the largest number";
}

} 
