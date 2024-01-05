#include <stdio.h>

int main(void)
{
  unsigned int value = 2;

  // Setting a bit is x |= (1 << N)
  //2 looks like this 10. I want to set the first bit --> 11 (3)

  //Clearing a bit is x &= ~(1 << N)

  value |= 1 << 0;
  printf("%d\n", value);

  //Should revert it back to 2
  value &= ~(1 << 0);
  printf("%d\n", value);

  //Querying determines the current value of the bit
  //Querying a bit is (x & (1 << N)) >> N

  //Read the second bit.
  printf("%d\n", value & (1 << 1)) >> 1;
  //Read the first bit.
  printf("%d\n", value & (1 << 0)) >> 0;
  
  return 0;
}