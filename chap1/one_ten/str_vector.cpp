#include <vector>
#include <string>
#include "assert.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  vector<string> strings;
  
  string input;
  cout<< "Enter some strings \n";
  while( getline(cin, input) && !input.empty() ){
    if (input == "")
      break;
    else{
      strings.push_back(input);
    }

  }
  
  sort(strings.begin(), strings.end());
  for (int i = 0; i < strings.size(); i++){
    cout << strings[i]; 
    cout << endl;
  }

  
  
  return 0;
  

}

