#include <iostream>
using std::cout;

void func(int x){
x = 73;
cout << ("Value is: {} \n",x);

}

int main (){

int x{10};  //this is equivalent to x=10
cout << "This is main ()\n";
func (x);
cout << ", " << ("Value is {} \n", x);
}
