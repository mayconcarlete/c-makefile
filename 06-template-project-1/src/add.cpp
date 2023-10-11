#include "add.hpp"
#include <iostream>

int Add::performSum(int a, int b){
  return ( a + b );
};


Add::~Add(){
  std::cout << "Add destructor was called" << "\n";
}