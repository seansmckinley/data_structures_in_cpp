#include <iostream>
#include <string>
#include <assert.h>
#include <vector>
using namespace std;

struct Node{
  string data;
  Node* next;
};

void print(Node* head);


struct Node* sorted_merge(struct Node* a, struct Node* b);
void merge_sort(struct Node** head);

void move_node(struct Node** src, struct Node** dest);
void push_node(struct Node** head, string data);

void split(struct Node* src, struct Node** front, struct Node**back);  
void print(Node* head);





void print(Node* head){
  for (Node *p = head; p!= NULL; p=p->next)
    cout << p->data << endl;
  
}

void merge_sort(struct Node** head){
  struct Node* h = *head;
  struct Node* a;
  struct Node* b;
 
  /* Base case -- length 0 or 1 */
  if ((h == NULL) || (h->next == NULL))
    {
      return;
    }
 
  /* Split head into 'a' and 'b' sublists */
  split(h, &a, &b); 
 
  /* Recursively sort the sublists */
  merge_sort(&a);
  merge_sort(&b);
 
  /* answer = merge the two sorted lists together */
  *head = sorted_merge(a, b);


}
struct Node* sorted_merge(struct Node* a, struct Node* b){
  // merge two sorted lists

  struct Node* result = NULL; 
  struct Node** ptrToLast = &result;

  while(true){
    if( a == NULL){ // a is NULL; empty list
      *ptrToLast = b;
      break;
    }
    else if( b == NULL){ // b is NULL; empty list
      *ptrToLast = a;
      break;
    }
    if( a->data <= b->data){
      move_node( &a, ptrToLast );
    }
    else{ 
      move_node( &b, ptrToLast );
    }    
    ptrToLast = &((*ptrToLast)->next);
  }
  return result;
}

// take node from front of src and add it to front of dest
void move_node(struct Node** src, struct Node** dest){
  // front source node
  struct Node* node = *src;
  // make sure it's not null
  assert(node != NULL);
  // advance src pointer
  *src = node->next;
  // link the old dest off the node
  node->next = *dest;
  // move dest to point to node
  *dest = node;
}

// ins node at the front
void push_node(struct Node** head, string data){
  // allocate node
  struct Node* newNode = new Node;
  // add data
  newNode->data = data;
  // link old list to new node by pointer
  newNode->next = (*head);
  // move head pointer to point to newNode
  (*head) = newNode;
  
} 

/*
src:
 _____        _____         _____
|     |      |     |      |     |
| d1  | -->  | d2  | -->  | d3  |
|_____|      |_____|      |_____|

dest:
 _____        _____        _____
|     |      |     |      |     |
| d4  | -->  | d5  | -->  |  d6 |
|_____|      |_____|      |_____|

dest:

*/
void split(struct Node* src, struct Node** front, struct Node** back){
  struct Node* fast;
  struct Node* slow;
  if (src == NULL || src->next == NULL)
    { // less than 2 elements in source list
      *front = src;
      *back = NULL;
    }
  else
    {
      slow = src;
      fast = src->next;  
      while(fast != NULL)
	{
	  fast = fast->next;
	  if(fast != NULL){
	    slow = slow->next;
	    fast = fast->next;
	  }
	}
      *front = src;
      *back = slow->next;
      slow->next= NULL;
  }
}
int main()
{
  struct Node* string_ll = NULL;

  struct Node* a = NULL;
  struct Node* b = NULL;

  struct Node **head = &string_ll;
  //code to read
  string input;
  int count;

  cout << "Enter some strings \n" ;
  while ( getline(cin, input) && !input.empty() ){
    if (input == "")
      break;
    else{
      push_node(head, input);      
      count++;
    }  
  }
  

  /*
  split(string_ll, &a, &b);
   
  cout << "\nPrinting a " <<endl;
  print(a);
  cout << "\nPrinting b " <<endl;
  print(b);
  cout << endl << endl;

  */


  
  
  merge_sort(head);


  print(*head);


  return 0;

}
