/*1. Show the total number of bits used, and all the bit values, for the following
variables:
*/

#include <stdio.h>
#include <stdlib.h>
#include "binaryfunc.h"
#include "printbinary.h"

int main(void){

  char c=35;
  char d='G';
  int x=-42;
  float f=17.25;
  int i=1099563008;
  double a=17.25;
  
  printf("Bits: %d\n", sizeof(c) * 8);
  printf("Bits: %d\n", sizeof(d) * 8);
  printf("Bits: %d\n", sizeof(x) * 8);
  printf("Bits: %d\n", sizeof(f) * 8);
  printf("Bits: %d\n", sizeof(i) * 8);
  printf("Bits: %d\n\n", sizeof(a) * 8);

  //Binary Test

  int* arrayC = calloc(4, sizeof(int));
  int* arrayD = calloc(8, sizeof(int));
  int* arrayX = calloc(6, sizeof(int));
  int* arrayI = calloc(31, sizeof(int));

  toBinary(arrayC, c);
  printBinary(arrayC);
  
  toBinary(arrayD, d);
  printBinary(arrayD);

  toBinary(arrayX, x);
  printBinary(arrayX);

  toBinary(arrayI, i);
  printBinary(arrayI);

  free(arrayC);
  free(arrayD);
  free(arrayX);
  free(arrayI);

  return 0;
}



