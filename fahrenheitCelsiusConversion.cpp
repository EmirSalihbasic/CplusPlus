#include <iostream>

int main() {

int choice ; 

float temp, countemp ; 

std::cout<<"Temperature conversion Menu"<<"\n" ;

std::cout<<"1. Fahrenheit to Celsius"<<"\n" ;

std::cout<<"2. Celsius to Fahrenheit"<<"\n" ;

std::cout<<"Enter your choice:" ;

std::cin>>choice; 

if( choice == 1)

{

std::cout<<"\n"<<" Enter temperature in Fahrenheit :" ;

std::cin >> temp ; 

countemp = (temp -32) / 1.8 ;

std::cout<<" The temperature in Celsius is : " << countemp <<"\n" ;

}

else 

{

std::cout<<"\n" << "Enter temperature in Centigrade : " ;

std::cin >> temp ; 

countemp = 1.8 * temp + 32 ; 

std::cout<<" The Temperature in Fahreheit is : " << countemp <<"\n" ; 

}

    return 0 ;
}