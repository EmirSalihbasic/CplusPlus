#include <iostream>
using namespace std;


int arr[5]{1,2,3,4,5};
//primitive array, derived from the original c language
int main(){
    
  for (const auto &value: arr) {
        std::cout << value << ' ';
    }
   
    return 0;
}