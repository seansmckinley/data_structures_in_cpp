
#include <iostream>
using namespace std;
struct S{ int a; S *b;};

int main()
{
  S z;
  S *x;
  
  S tmp;
  S tmp2;

  tmp.a = 17;
  tmp.b = &tmp2; 
  
  tmp2.a = 20;
  tmp2.b = NULL;
  
  cout << "tmp.a: "<< tmp.a << "\t tmp.b " << tmp.b << endl; 
  //  cout << "(*tmp).a: "<< (*tmp).a << "\t (*tmp).b " << (*tmp).b << endl; 
  cout << "tmp2.a: "<< tmp2.a << "\t tmp2.b " << tmp2.b << endl; 
  
  x = &tmp2;
  cout << "x->a: "<< x->a << "\t x->b " << x->b << endl; 

  cout << "x->b - z-.b " << x->b-z.b << endl;
  return 0;



}
