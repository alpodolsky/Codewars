/*
Problem Given:
The goal of this exercise is to convert a string to a new string 
where each character in the new string is "(" if that character appears only once in the original string, 
or ")" if that character appears more than once in the original string. 
Ignore capitalization when determining if a character is a duplicate.

Examples
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))((" 
*/
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
char *DuplicateEncoder(char *strin)
{
  // TODO : Your code.
   int table[256]={0};
  char* ret = (char*)malloc(sizeof(char)*(strlen(strin)+1));
  memset(ret, 0, (int)strlen(strin)+1);
  for(int i = 0; i < (int)strlen(strin); i++){
    table[toupper(strin[i])]++;
  }
  for(int i = 0; i < (int)strlen(strin); i++){
    if(table[toupper(strin[i])]==1){
      ret[i]='(';
    }
    else{
      ret[i]=')';
    }
  }
  
  
  return  ret;

}