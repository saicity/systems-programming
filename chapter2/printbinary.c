#include "printbinary.h"
void printBinary(int arr[])
{
  int size = sizeof(arr);
  for(int i = size; i >= 0; i--)
  {
    printf("%d", arr[i]);
  }
}