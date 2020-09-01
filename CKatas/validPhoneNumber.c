/*
Problem Given:
Write a function that accepts a string, and returns true if it is in the form of a phone number.
Assume that any integer from 0-9 in any of the spots will produce a valid phone number.

Only worry about the following format:
(123) 456-7890 (don't forget the space after the close parentheses)
*/
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool valid_phone_number(const char* number) {
    //  <----  hajime!
  if((number[0]!='('||number[4]!=')')||number[5]!=' '||number[9]!='-'||strlen(number)!=14){
    return false;
  }
  char*pointer = number;
  //could split this work into three threads since they do not overlap
  for(int i = 1; i < 4;i++){
    if(!isdigit(pointer[i])){
      return false;
    }
  }
  for(int i = 6; i < 9;i++){
    if(!isdigit(pointer[i])){
      return false;
    }
  }
  for(int i = 10; i < 14;i++){
    if(!isdigit(pointer[i])){
      return false;
    }
  }
  return true;

}