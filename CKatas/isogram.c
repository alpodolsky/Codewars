/*
Problem Given:
An isogram is a word that has no repeating letters, consecutive or non-consecutive. 
Implement a function that determines whether a string that contains only letters is an isogram. 
Assume the empty string is an isogram. Ignore letter case.

isIsogram "Dermatoglyphics" == true
isIsogram "aba" == false
isIsogram "moOse" == false -- ignore letter case
*/
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool IsIsogram(char *str) 
{
    // Code on you crazy diamond!
    int alpha[26];
    for(int i = 0; i <26;i++){
        alpha[i]=0;
    }
    int i;
    for(i =0; str[i];i++){
        int arrIndex = (int)(tolower(str[i])- 'a');
        alpha[arrIndex]=alpha[arrIndex]+1;
        if(alpha[arrIndex] == 2){
            return false;
        }
    }
    return true;
}