/*
Problem Given:
You are given an array (which will have a length of at least 3, but could be very large) containing integers. 
The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. 
Write a method that takes the array as an argument and returns this "outlier" N.

Examples
    [2, 4, 0, 100, 4, 11, 2602, 36]
    Should return: 11 (the only odd number)

    [160, 3, 1719, 19, 11, 13, -21]
    Should return: 160 (the only even number)
*/
#include <stdlib.h>

int find_outlier(const int *values, size_t count){
  
  //determine if odd or even is majority
  int even =0, odd=0;
  for(int i = 0; i < 3;i++){
    if(values[i]%2==0){
      even++;
      if(even>1){
        break;
      }
    }
    else{
      odd++;
      if(odd>1){
        break;
      }
    }
  }
  for(int i = 0; i < count; i++){
    if(even>odd){
      if(values[i]%2!=0){
        return values[i];
      }
    }
    else{
      if(values[i]%2==0){
        return values[i];
      }
    }
  }
}