/*
Problem Given:
Write a function that takes an integer as input, 
and returns the number of bits that are equal to one in the binary representation of that number. 
You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
*/
#include <stddef.h>

size_t countBits(unsigned value);

size_t countBits(unsigned value){
  size_t output= 0;
  
  size_t counter = sizeof(value)*8;
  for(size_t i = 1; i <= counter;i++){
    if(value&(1<<i)){
      output++;
    }
  }
  
  return output;
}