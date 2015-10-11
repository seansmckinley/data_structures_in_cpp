#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  int *ptr = &a;
  
  cout << ptr << endl;
  cout << *ptr << endl;
  cout << &ptr << endl;
  cout << addressof(ptr)<<endl;
  bool c = (*ptr == a);
  cout << c << endl; 
  cout << **&ptr<<endl;

}
