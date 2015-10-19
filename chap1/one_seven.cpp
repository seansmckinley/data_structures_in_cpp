#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
  int a = 3;
  const int & b = a;
  const int c = a;
  cout << a << endl;
  cout << b << endl;
  
  cout << &a << endl;
  cout << &b <<endl;
  
}
