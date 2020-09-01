/*
Problem Given:
In this example you have to validate if a user input string is alphanumeric. 
The given string is not nil/null/NULL/None, so you don't have to check that.

The string has the following conditions to be alphanumeric:
  At least one character ("" is not valid)
  Allowed characters are uppercase / lowercase latin letters and digits from 0 to 9
  No whitespaces / underscore
*/
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool alphanumeric(const char* strin) {
    // <----hajime!
  char* pointer = strin;
  if((int)strlen(strin)<=1){
    if((int)strlen(strin)==0){
      return 0;
    }
    if((int)strlen(strin)==1){
      if(strin==" "||strin==""){
        return 0;
      }
    }
  }
  for(int i = 0; i < (int)strlen(strin);i++){
    if((isdigit(pointer[i])==0)&&(isalpha(pointer[i])==0)){
      return 0;
    }
  }
  return 1;
}