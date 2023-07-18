#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){
  stack<char> pilha;
  int n;
  char c;
  string str;
  bool is_defined = true;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> str; 
    for(int j = 0; j < str.length(); j++) {
      c = str[j]; 
      
      if (j == 0 && (c != '(' && c != '{' && c != '[')){
        is_defined = false;
        break;
      } 
        
      if (c == '(' || c == '{' || c == '['){
         pilha.push(c); 
      } 
      
      if (c == ')') {
        
        if (pilha.empty()) {
          is_defined = false;
          break;
        }
        
        if (pilha.top() != '(') {
          is_defined = false;
          pilha.pop();
          break;
        } else {
          pilha.pop();
        }
      }
      
      if (c == '}') {
        if (pilha.empty()) {
          is_defined = false;
          break;
        }
        if (pilha.top() != '{') {
          is_defined = false;
          pilha.pop();
          break;
        } else {
          pilha.pop();
        }
      }
      
      if (c == ']') {
        if (pilha.empty()) {
          is_defined = false;
          break;
        }
        if (pilha.top() != '[') {
          is_defined = false;
          pilha.pop();
          break;
        } else {
          pilha.pop();
        }
      }
    }
    
    if (is_defined)
      cout << "S" << endl;
    else 
      cout << "N" << endl;

    while (!pilha.empty()) {
      pilha.pop();
    }

    is_defined = true;
  }
}