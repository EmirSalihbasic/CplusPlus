#include <iostream>
#include <string>

auto function(std::string long_str) -> std::string {
  if (long_str.length() > 10) {
    return "The string is too long!";
  } else {
    return "The string is short enough!";
  }
}

auto main() -> int {
  std::string long_str;
  
  std::cout << "Enter a long string: ";
  std::cin >> long_str;

  std::cout << function(long_str) << std::endl;

  return 0;
}