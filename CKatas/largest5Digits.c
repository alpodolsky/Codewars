/*
Problems Given:
In the following 6 digit number:

283910
91 is the greatest sequence of 2 consecutive digits.

In the following 10 digit number:

1234567890
67890 is the greatest sequence of 5 consecutive digits.

Complete the solution so that it returns the greatest sequence of five consecutive digits found within the number given. 
The number will be passed in as a string of only digits. 
It should return a five digit integer. 
The number passed may be as large as 1000 digits.
*/

#include <stdlib.h>
#include <string.h>
int largest_five_digits(const char *digits)
{
  int max = 0, n = 0;
  char buff[6];
  for(int i = 0; i < (int)strlen(digits)-4;i++){
    strncpy(buff, digits+i, 5);
    n = atoi(buff);
    if(max<n)max=n;
  }
    return max; // you code here
}