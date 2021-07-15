#include <iostream>
#include <string>

std::string finalAnswer = "";

int main() {

  // Brain explodes here:
  for (int i = 1; i <= 100; i++){
    if (i % 3 == 0 && i % 5 == 0){
      finalAnswer = "FizzBuzz";
      std::cout << finalAnswer << std::endl;
    }
    else if (i % 3 == 0){
      finalAnswer = "Fizz";
      std::cout << finalAnswer << std::endl;
    }
    else if (i % 5 == 0){
      finalAnswer = "Buzz";
      std::cout << finalAnswer << std::endl;
    }
    else {
      std::cout << i << std::endl;      
    }
  }
}
