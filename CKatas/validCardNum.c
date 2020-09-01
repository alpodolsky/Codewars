/*
Problem Given:
In this Kata, you will implement the Luhn Algorithm, which is used to help validate credit card numbers.

Given a positive integer of up to 16 digits, return true if it is a valid credit card number, and false if it is not.

Here is the algorithm:

Double every other digit, scanning from right to left, starting from the second digit (from the right).

Another way to think about it is: if there are an even number of digits, 
    double every other digit starting with the first; 
    if there are an odd number of digits, double every other digit starting with the second:
        1714 ==> [1*, 7, 1*, 4] ==> [2, 7, 2, 4]
        12345 ==> [1, 2*, 3, 4*, 5] ==> [1, 4, 3, 8, 5]
        891 ==> [8, 9*, 1] ==> [8, 18, 1]
If a resulting number is greater than 9, replace it with the sum of its own digits 
(which is the same as subtracting 9 from it):
    [8, 18*, 1] ==> [8, (1+8), 1] ==> [8, 9, 1]
    or:
    [8, 18*, 1] ==> [8, (18-9), 1] ==> [8, 9, 1]

Sum all of the final digits:
    [8, 9, 1] ==> 8 + 9 + 1 = 18
Finally, take that sum and divide it by 10. If the remainder equals zero, the original credit card number is valid.

  18 (modulus) 10 ==> 8 , which is not equal to 0, so this is not a valid credit card number
*/

#include <stdbool.h>
#include <math.h>
bool validate(long digits) {

    //  <----  hajime!
    int length = floor(log10(digits))+1;
    if(length == 1){
        return false;
    }
    long copyDig = digits;
    long *arr= malloc(sizeof(long)*length);
    long sum = 0;
    for(int i = 0; i < length; i ++){
        if(i%2!=0){
            arr[length - i - 1] = 2*(copyDig%10);
        }
        else{ 
            arr[length - i - 1] = copyDig%10;
        }
      
        copyDig=copyDig/10;
    }
    for(int i = 0; i < length; i++){
        if(arr[i]>=10){
            arr[i]=arr[i]-9;
        }
      sum+=arr[i];
    }
  
    if((sum%10==0&&sum>=10)||sum==0){
        return true;
    }
    return false;
}