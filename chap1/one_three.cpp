


#include <iostream>
using namespace std;

struct X{
  int data;

};

int main(){

  int *ptr;
  int **ptrPtr;
  X *xPtr;
  X obj;
  
  obj.data = 15;
  
  

  int variable = 10;
  
  ptr = &variable;
  
  cout << variable << endl;
  cout << ptr << endl;
  cout << *&variable <<endl;
  cout << &*ptr << endl;
  cout << &ptr << endl;
  ptrPtr = &ptr;
  cout << ptrPtr << endl;

}
