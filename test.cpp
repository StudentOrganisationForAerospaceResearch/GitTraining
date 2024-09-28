// Another simple C++ script with formatting and linting issues for clang-format
// and clang-tidy.

#include <iostream>

int add(int a,
        int b) {  // Missing space between parameters for clang-format to catch.
  return a + b;   // Inconsistent spacing around operators.
}

void printSum(int a, int b) {  // Formatting issue with parameters.
  std::cout << "The sum of " << a << " and " << b << " is: " << add(a, b)
            << std::endl;  // Missing spaces in function call.
}

int main() {
  int x = 10;  // No space between `=` and value.
  int y = 20;
  printSum(x, y);  // Misformatted function call.
  return 0;
}
