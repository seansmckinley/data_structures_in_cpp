#include <iostream>
#include <string>

using namespace std;

struct Node{
  string data;
  Node* next;

};

void print(Node* head){
  for (Node *p = head; p->next != NULL; p=p->next)
    cout << p->data<<endl;
  
}
void read_in(Node* head){
  string input;
  cout << "Enter arbitrary number of strings."<< endl;
 
  while(true){
    getline(cin, input);
    head->data = input;
    head->next = new Node;
    head = head->next;
    
    if (input == "" )
      break;

    
  }

}
int main(){
  Node* string_ll = new Node;

  read_in(string_ll);

  print(string_ll);

  return 0;

}
