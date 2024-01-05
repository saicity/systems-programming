 #include "binaryfunc.h"

int* toBinary(int arr[], int value){
  int quotient, remainder;
  for(int i = 0; quotient != 0; i++)
  {
    remainder = quotient % 2; 
    quotient /= 2;
    arr[i] = remainder;
  }

  return arr;
 }


