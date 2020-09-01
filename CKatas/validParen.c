/*
Problems Given:
Write a function called that takes a string of parentheses, 
and determines if the order of the parentheses is valid. 
The function should return true if the string is valid, and false if it's invalid.

Examples
"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true
Constraints
0 <= input.length <= 100
*/

#include <stdbool.h>

bool validParentheses(const char* strin) {

    // <---- hajime!
  int open=0, close=0;
  for(int i = 0; i < strlen(strin); i++){
    if(strin[i]=='('||strin[i]==')'){
      if(strin[i]==')'&&open==0){
        return false;
      }
      if(strin[i]=='('){
        open++;
      }
      if(strin[i]==')'&&open>=1){
        open--;
      }
    }
  }
  if(open!=close){
    return false;
  }
  return true;
}