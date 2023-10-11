#include "sub.hpp"
#include <iostream>

Sub::~Sub(){
  std::cout << "Sub destructor was called." << "\n";
}

int Sub::performSub(int a, int b) {
    return ( a- b );
}