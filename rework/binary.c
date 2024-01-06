#include "binary.h"

int* binary(int decimal)
{
  int binaryHolder[] = {0};
  int i = 0;

  while(decimal > 0)
  {
    int remainder;

    remainder = decimal % 2;
    binaryHolder[i] = remainder;

    i += 1;

    decimal /= 2;
  }

  int size = sizeof(binaryHolder);
  printf("%d", size);

}