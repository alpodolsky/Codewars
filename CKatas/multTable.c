/*
Problem Given:
Your task, is to create NxN multiplication table, of size provided in parameter.

for example, when given size is 3:

1 2 3
2 4 6
3 6 9
for given example, the return value should be: [[1,2,3],[2,4,6],[3,6,9]]
*/
#include <stdlib.h>

int **multiplication_table(int n) {
    //  <----  hajime!
    int**output = calloc(n, sizeof(int*));
    for(int i = 0; i < n;i++){
      output[i] = calloc(n, sizeof(int));
      for(int j = 0; j < n;j++){
        output[i][j] = (i+1)*(j+1);
      }
    }
  return output;
}