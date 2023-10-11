#include <iostream>
#include "add.hpp"
#include "sub.hpp"

int main(void){
  Add* add = new Add();
  Sub* sub = new Sub();

  int result = add->performSum(2, 2);
  std::cout << "Result of sum: " << result << "\n";

  delete(add);

  result = sub->performSub(3, 4);
  std::cout << "Result of subtraction: " << result << "\n";
  delete(sub);

  return 0;
}