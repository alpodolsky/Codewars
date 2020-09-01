/*
Problems Given:
Write a function named sumDigits which takes a number as input and returns the sum of the absolute value of each of the number's decimal digits. For example:

  sumDigits(10);  // Returns 1
  sumDigits(99);  // Returns 18
  sumDigits(-32); // Returns 5
Let's assume that all numbers in the input will be integer values.
*/
#include <stdlib.h>
int sum_digits(int n) {

    //  <----  hajime!
  int sum = 0;
    int absoluteN = abs(n);
    while(absoluteN!=0){
        if(absoluteN<10){
            sum+=absoluteN;
            break;
        }
        else{
            sum+=absoluteN%10;
            absoluteN = absoluteN/10;
        }
    
    }
    return sum;
}