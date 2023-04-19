#include <iostream>
using std::cout;

int func(int a){

cout << "Value is: {} \n";
return a*2;
}

int main (){

cout << "This is main ()\n";

auto x = func(42);
cout << "Value is {} \n: " <<  x;

}
