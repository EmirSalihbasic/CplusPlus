#include <iostream>
using std::cout;

void func (int i){
     cout << ("i is!\n",i);
}
int main(){
    cout << "This is main!\n";
    func(42);  //this is how we call a fucntion
}