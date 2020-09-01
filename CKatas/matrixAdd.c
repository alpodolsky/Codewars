/*
Given problem:
Write a function that accepts two square matrices (N x N two dimensional arrays), 
and return the sum of the two. Both matrices being passed into the function will be of size N x N (square), 
containing only integers.
How to sum two matrices:
  Take each cell [n][m] from the first matrix, 
  and add it with the same [n][m] cell from the second matrix. 
  This will be cell [n][m] of the solution matrix.
*/
#include <stdlib.h>
#include <stddef.h>

int* matrix_addition(size_t n, int matrix_a[n][n], int matrix_b[n][n]) {
    // <---- hajime!
  int*output = (int*)malloc((n*n)*sizeof(int));
  int k = 0;
  
  for(int i = 0; i < n;i++){
    for(int j = 0; j < n;j++){
      output[k++]=matrix_a[i][j]+matrix_b[i][j];
    }
  }
  return output;
}