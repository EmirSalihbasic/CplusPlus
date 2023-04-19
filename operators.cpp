#include <iostream>
using namespace std;

int main(){
    int x=10;
    int y=x;
    int d=2;
    int z= x + y + 3; 
    int c= z % x; //this will give us remainder
    cout <<  c << ' ' << z ;
    
    d += x; // compound opeerator, this will add x to d (example of other compound is /=, also %=)
    cout <<  ' ' << d;
    
    return 0;

}