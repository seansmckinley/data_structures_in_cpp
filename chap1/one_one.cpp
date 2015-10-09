
#include <iostream>


int main(){

  int a = 5;
  int b = 10;

  int *ptr; // A pointer; in a declaration, the asterisk is not behaving as a dereference operator but is instead part of the type.
  int **ptrPtr; // A pointer to a pointer;
  
  std::cout << "ptr = address of a" << std::endl;

  ptr = &a;
  std::cout << *ptr << std::endl;
  
  std::cout << "ptrPtr = address of ptr" << std::endl;
  ptrPtr = &ptr;

  std::cout << **ptrPtr << std::endl;
  
  *ptrPtr = &b;
  std::cout << **ptrPtr << std::endl;
    
  return 0;


}
