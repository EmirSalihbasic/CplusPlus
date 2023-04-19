//We are calculating factorial of 5

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    long long factorial = 1;  //We are using long long data type for factorial because it could be large, we named it easily factorial.

    for(int i = 1; i <= n; ++i) {    
        factorial *= i;
    }    //THis is the syntax to retrieve the numbers from 1 to 5 and to multiply them

    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}