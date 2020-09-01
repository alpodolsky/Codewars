/*
Problem Given:
The new "Avengers" movie has just been released! 
There are a lot of people at the cinema box office standing in a huge line. 
Each of them has a single 100, 50 or 25 dollar bill. An "Avengers" ticket costs 25 dollars.

Vasya is currently working as a clerk. He wants to sell a ticket to every single person in this line.

Can Vasya sell a ticket to every person and give change if he initially has no money 
    and sells the tickets strictly in the order people queue?

Return YES, if Vasya can sell a ticket to every person and give change with the bills he has at hand at that moment. 
Otherwise return NO.

Examples:
Line.Tickets(new int[] {25, 25, 50}) // => YES 
Line.Tickets(new int[] {25, 100}) // => NO. Vasya will not have enough money to give change to 100 dollars
Line.Tickets(new int[] {25, 25, 50, 50, 100}) // => NO. 
    Vasya will not have the right bills to give 75 dollars of change (you can't make two bills of 25 from one of 50)
*/

#include <stdlib.h>
#include <stdio.h>
int tickets(size_t length, const int people[length]) {
  //Dang Lochness monster tryna get my twoFity
  int i, countFity=0, countTwoFive=0;
  for(i=0;i<(int)length;i++){
    if(people[i]==25){
      countTwoFive++;
    }
    if(people[i]==50){
      if(countTwoFive>0){
        countTwoFive--;
        countFity++;
      }
      else{
        return 0;
      }
    }
    if(people[i]==100){
      if(countTwoFive>2||(countFity>0&&countTwoFive>0)){
        if(countFity>0){
          countFity--;
          countTwoFive--;
          continue;
        }
        if(countTwoFive>2){
          countTwoFive=countTwoFive-3;
          continue;
        }
        else{
          return 0;
        }
      }
      else{
        return 0;
      }
    }
   }
  return 1;// instead of strings "YES"/"NO" return true/false instead
}